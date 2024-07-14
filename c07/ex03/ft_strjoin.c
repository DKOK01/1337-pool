/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysadeq <aysadeq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:41:43 by aysadeq           #+#    #+#             */
/*   Updated: 2024/07/14 20:15:55 by aysadeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		s_len;
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	s_len = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
		s_len += ft_strlen(strs[i++]);
	str = malloc(sizeof(char) * (s_len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i++ < size - 1)
			ft_strcat(str, sep);
	}
	return (str);
}

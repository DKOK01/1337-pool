/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysadeq <aysadeq@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:54:31 by aysadeq           #+#    #+#             */
/*   Updated: 2024/07/13 21:39:56 by aysadeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	s;
	int	*arr;
	int	i;

	s = max - min;
	if (min >= max)
	{
		return (NULL);
	}
	arr = malloc(s * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

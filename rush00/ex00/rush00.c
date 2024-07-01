/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaykhlf <yaykhlf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:17:55 by yaykhlf           #+#    #+#             */
/*   Updated: 2024/06/29 17:52:13 by yaykhlf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	line;

	col = y;
	line = x;
	while (y > 0)
	{
		x = line;
		while (x > 0)
		{
			if ((y == col || y == 1) && (x == line || x == 1))
				ft_putchar('o');
			else if (y == col || y == 1)
				ft_putchar('-');
			else if (x == line || x == 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			x--;
		}
		ft_putchar('\n');
		y--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaykhlf <yaykhlf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:17:55 by yaykhlf           #+#    #+#             */
/*   Updated: 2024/06/29 18:10:27 by yaykhlf          ###   ########.fr       */
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
			if ((y == col && x == line) || (y == col && x == 1))
				ft_putchar('A');
			else if ((y == 1 && x == line) || (y == 1 && x == 1))
				ft_putchar('C');
			else if ((y == col || y == 1) || (x == line || x == 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			x--;
		}
		ft_putchar('\n');
		y--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aplotnyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:51:44 by aplotnyk          #+#    #+#             */
/*   Updated: 2022/10/15 16:51:50 by aplotnyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	error_handler(int x, int y)
{
	if (y <= 0 || x <= 0)
	{
		write(1, "Please enter an integer > 0.\n", 29);
		return (0);
	}
	else
		return (1);
}		

void	print_first_last_line(int a, int b, int c, int d)
{
	write(1, "o", 1);
	if (b == 1)
		a--;
	while (c <= (a - 1))
	{
		if ((c != 1 && d != 1) || (c != 1 && d != b) || b == 1)
			ft_putchar('-');
		c++;
	}
	if ((a != 1) && (a != 0))
		ft_putchar('o');
}

void	print_pipe_spaces(int a, int b, int c, int d)
{
	ft_putchar('|');
	while (c <= (a - 1) && a > 2)
	{
		if ((c != 1 && d != 1) || (c != 1 && d != b))
			ft_putchar(' ');
		c++;
	}	
	if (a != 1)
		ft_putchar('|');
}

void	rush(int x, int y)
{
	int	check_y;
	int	check_x;

	if (error_handler(x, y))
	{
		check_y = 1;
		while (check_y <= y)
		{
			check_x = 1;
			if ((check_x == 1 && check_y == 1) || (check_x == x && check_y == x)
				|| (check_x == 1 && check_y == y)
				|| (check_x == x && check_y == y))
				print_first_last_line(x, y, check_x, check_y);
			else
				print_pipe_spaces(x, y, check_x, check_y);
			ft_putchar('\n');
			check_y++;
		}
	}
}

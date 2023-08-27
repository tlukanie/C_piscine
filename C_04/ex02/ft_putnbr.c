/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:46:53 by tlukanie          #+#    #+#             */
/*   Updated: 2022/10/16 13:58:46 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	check_min_num(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	else
		return (1);
}

void	print_int(int nb, int j)
{
	char	c;

	c = (nb / j) + '0';
	write(1, &c, 1);
}

void	count(int i, int j, int y, int nb)
{
	while (i > 9)
	{
		y = y + 1;
		i = i / 10;
		j = j * 10;
	}
	while (j > 0)
	{
		print_int(nb, j);
		nb = nb % j;
		j = j / 10;
	}
}

void	ft_putnbr(int nb)
{
	int	i;
	int	j;
	int	y;

	i = 0;
	j = 0;
	y = 0;
	if (check_min_num(nb))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * (-1);
		}
		i = nb;
		j = 1;
		count(i, j, y, nb);
	}
}

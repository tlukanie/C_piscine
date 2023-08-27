/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:04:46 by tlukanie          #+#    #+#             */
/*   Updated: 2022/10/15 21:27:10 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_char(char ch)
{
	write(1, &ch, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_char((char)((a / 10) + '0'));
			print_char((char)((a % 10) + '0'));
			write(1, " ", 1);
			print_char((char)(b / 10) + '0');
			print_char((char)(b % 10) + '0');
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

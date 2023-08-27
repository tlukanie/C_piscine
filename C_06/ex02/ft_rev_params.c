/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:18:31 by tlukanie          #+#    #+#             */
/*   Updated: 2022/10/25 13:40:06 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_char(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		++str;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	while (i > 0 && argv[i])
	{
		print_char(argv[i]);
		write(1, "\n", 1);
		i--;
	}
}

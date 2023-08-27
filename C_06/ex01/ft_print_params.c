/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:57:31 by tlukanie          #+#    #+#             */
/*   Updated: 2022/10/25 13:13:17 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_words(char *str)
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

	i = 1;
	while (argv[i] && argc > 0)
	{
		print_words(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

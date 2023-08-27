/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:12:17 by tlukanie          #+#    #+#             */
/*   Updated: 2022/10/27 18:48:24 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_prime_or_not(int nb)
{
	int	c;

	if (nb == 1 || nb == 0)
		return (0);
	c = 2;
	while (c <= nb - 1)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (check_prime_or_not(nb) != 1)
	{
		nb++;
	}
	return (nb);
}

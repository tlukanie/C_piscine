/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:39:14 by tlukanie          #+#    #+#             */
/*   Updated: 2022/10/26 09:59:50 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (nb == 0 && power == 0)
		return (result);
	else if (power < 0)
		result = 0;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

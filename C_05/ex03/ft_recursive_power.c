/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:11:50 by tlukanie          #+#    #+#             */
/*   Updated: 2022/10/26 10:37:07 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{	
	if (power < 0)
		return (0);
	else if (power != 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (nb == 0 && power == 0)
		return (1);
	else
		return (1);
}

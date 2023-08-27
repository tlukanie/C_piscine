/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:57:49 by tlukanie          #+#    #+#             */
/*   Updated: 2022/10/16 17:15:43 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division_res;
	int	remainder_res;

	division_res = (*a) / (*b);
	remainder_res = (*a) % (*b);
	*a = division_res;
	*b = remainder_res;
}

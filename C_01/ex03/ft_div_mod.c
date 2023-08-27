/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:15:19 by tlukanie          #+#    #+#             */
/*   Updated: 2022/10/16 16:55:26 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	division_res;
	int	remainder_res;

	division_res = a / b;
	*div = division_res;
	remainder_res = a % b;
	*mod = remainder_res;
}

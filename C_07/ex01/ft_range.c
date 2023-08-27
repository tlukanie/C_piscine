/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:51:24 by tlukanie          #+#    #+#             */
/*   Updated: 2022/10/30 20:09:04 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	range = NULL;
	if (min >= max)
	{
		return (range);
	}
	i = min;
	range = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[min - i] = min;
		min ++;
	}
	return (range);
}

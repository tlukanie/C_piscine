/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:09:57 by tlukanie          #+#    #+#             */
/*   Updated: 2022/11/01 13:57:51 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	size;
	int				*arr;
	int				i;
	int				j;

	j = 0;
	if (max > min)
		size = max - min;
	else
	{
		range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
		return (-1);
	i = min;
	while (i < max)
	{
		arr[j] = i;
		i++;
		j++;
	}
	*range = arr;
	return (size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:14:49 by tlukanie          #+#    #+#             */
/*   Updated: 2022/10/19 23:34:18 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (str[i] == '\0')
		result = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
			result = 1;
		else
			return (0);
		i++;
	}
	return (result);
}

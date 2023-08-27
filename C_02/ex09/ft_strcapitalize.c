/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:59:17 by tlukanie          #+#    #+#             */
/*   Updated: 2022/10/20 14:32:44 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*return_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	value_check;

	i = 0;
	value_check = 1;
	return_lower(str);
	while (str[i] != '\0')
	{	
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (value_check == 1)
			{
				str[i] -= 32;
				value_check = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			value_check = 0;
		else
			value_check = 1;
		i++;
	}
	return (str);
}

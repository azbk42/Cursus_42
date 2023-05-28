/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azbreak <azbreak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:38:54 by azbreak           #+#    #+#             */
/*   Updated: 2023/05/21 15:26:27 by azbreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int nbr)
{
	int		len;
	long	tmp;

	len = 0;
	tmp = (long) nbr;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		len++;
		tmp *= -1;
	}
	while (tmp > 0)
	{
		tmp /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	result;
	int		occurence;
	int		i;

	i = 0;
	occurence = ft_len(n);
	result = (long) n;
	str = malloc(occurence * sizeof(char) + 1);
	if (!str)
		return (NULL);
	if (result < 0)
	{
		str[0] = '-';
		i++;
		result *= -1;
	}
	str[occurence] = '\0';
	while (i < occurence)
	{
		str[occurence -1] = '0' + (result % 10);
		result /= 10;
		occurence--;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azbreak <azbreak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:00:12 by azbreak           #+#    #+#             */
/*   Updated: 2023/05/21 11:34:34 by azbreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	op;
	int	result;

	result = 0;
	op = 1;
	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			op *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	result *= op;
	return (result);
}

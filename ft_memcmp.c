/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azbreak <azbreak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:00:48 by azbreak           #+#    #+#             */
/*   Updated: 2023/05/20 20:49:11 by azbreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*p;
	unsigned char		*cmp;

	i = 0;
	p = (unsigned char *)s1;
	cmp = (unsigned char *)s2;
	while (i < n)
	{
		if (p[i] == cmp[i])
			i++;
		else
			return (p[i] - cmp[i]);
	}
	return (0);
}

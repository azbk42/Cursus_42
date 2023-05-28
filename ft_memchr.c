/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azbreak <azbreak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:00:50 by azbreak           #+#    #+#             */
/*   Updated: 2023/05/20 11:36:30 by azbreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	letter;

	i = 0;
	letter = (unsigned char)c;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (letter == p[i])
			return ((void *)&p[i]);
		i++;
	}
	p = NULL;
	return ((void *)p);
}

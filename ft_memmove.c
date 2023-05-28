/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azbreak <azbreak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:02:19 by azbreak           #+#    #+#             */
/*   Updated: 2023/05/21 14:35:41 by azbreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*psrc;

	p = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	i = 0;
	if (p > psrc)
	{
		i = n;
		while (i > 0)
		{
			p[i - 1] = psrc[i - 1];
			i--;
		}
		return (dest);
	}
	while (i < n)
	{
		p[i] = psrc[i];
		i++;
	}
	return (dest);
}

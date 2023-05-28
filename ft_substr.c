/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azbreak <azbreak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:10:50 by azbreak           #+#    #+#             */
/*   Updated: 2023/05/24 21:05:33 by azbreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	lenmax;
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)&s[start];
	if ((start > ft_strlen(s)) || len == 0)
		return (ft_calloc(1, 1));
	lenmax = ft_strlen(s) - start;
	if (len < lenmax)
		lenmax = len;
	tab = (char *)malloc((lenmax + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (p[i] && i < len)
	{
		tab[i] = p[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azbreak <azbreak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:02:03 by azbreak           #+#    #+#             */
/*   Updated: 2023/05/20 22:24:25 by azbreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			p = (char *)&haystack[i];
			while (needle[j] && needle[j] == haystack[i] && i < len)
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return (p);
			i -= j;
		}
		i++;
	}
	return (NULL);
}

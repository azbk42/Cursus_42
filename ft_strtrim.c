/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azbreak <azbreak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:01:40 by azbreak           #+#    #+#             */
/*   Updated: 2023/05/24 21:37:26 by azbreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	size_t	i;
	size_t	len;
	size_t	j;

	j = 0;
	i = 0;
	len = strlen(s1);
	while (check_set(set, s1[i]) == 1 && i < ft_strlen(s1) / 2)
		i++;
	while (check_set(set, s1[len - 1]) == 1 && len > ft_strlen(s1) / 2)
		len--;
	tab = (char *)malloc((len - i) + 1);
	if (!tab)
		return (NULL);
	while (i < len)
	{
		tab[j] = s1[i];
		j++;
		i++;
	}
	tab[j] = '\0';
	return (tab);
}
// int main()
// {
// 	char *s;

// 	s = ft_strtrim("xxx   xxx   ", "x ");

// 	printf("%s", s);

// 	free(s);
// }
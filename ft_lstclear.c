/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azbreak <azbreak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:35:57 by azbreak           #+#    #+#             */
/*   Updated: 2023/05/22 13:50:41 by azbreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*prev;

	if (lst == NULL || *lst == NULL)
		return ;
	tmp = *lst;
	while (tmp)
	{	
		if (tmp->content)
			(del)(tmp->content);
		prev = tmp;
		tmp = tmp->next;
		free(prev);
	}
	*lst = NULL;
}

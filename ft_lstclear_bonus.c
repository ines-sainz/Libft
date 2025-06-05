/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:30:01 by isainz-r          #+#    #+#             */
/*   Updated: 2024/05/26 11:58:52 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes and frees the given list and its contents using the given
 *        delete function, then sets the list pointer to NULL.
 *
 * @param lst A pointer to the pointer of the first node of the list.
 * @param del A function to delete the content of each node.
 */
void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*temp;

	if (!lst || !*lst)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/*
	while (lst != NULL)
	{
		temp = lst->content;
		lst = lst->next;
		del(temp);
	}
	lst->next = NULL;
	free(lst);
}*/

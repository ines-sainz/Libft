/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 09:48:17 by isainz-r          #+#    #+#             */
/*   Updated: 2024/05/26 11:59:22 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates the list 'lst' and applies the function 'f' to the content  
 *        of each node. Creates a new list resulting from the successive  
 *        applications of 'f'. The 'del' function is used to delete the  
 *        content of a node if needed.
 *
 * @param lst The address of a pointer to the first node of the list.
 * @param f The function to apply to the content of each node.
 * @param del The function to delete the content of a node if allocation fails.
 * @return A new list resulting from the successive applications of 'f',  
 *         or NULL if allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	head = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst != NULL)
	{
		temp = ft_lstnew(lst->content);
		if (!temp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		temp->content = f(temp->content);
		ft_lstadd_back(&head, temp);
		lst = lst->next;
	}
	return (head);
}

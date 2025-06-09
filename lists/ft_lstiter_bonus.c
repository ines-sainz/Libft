/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 09:42:20 by isainz-r          #+#    #+#             */
/*   Updated: 2024/02/02 17:49:37 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Iterates over the list and applies the function 'f' to the content
 *        of each node.
 *
 * @param lst The first node of the list.
 * @param f The function to apply to each node's content.
 */
void	ft_lstiter(t_list *lst, void (*f) (void *))
{
	void	*temp;

	while (lst != NULL)
	{
		temp = lst->content;
		lst = lst->next;
		f(temp);
	}
}

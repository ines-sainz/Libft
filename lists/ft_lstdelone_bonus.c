/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 09:26:53 by isainz-r          #+#    #+#             */
/*   Updated: 2024/02/02 18:02:34 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Deletes and frees a single node from the list using the given
 *        delete function on the node's content.
 *
 * @param lst The node to delete.
 * @param del The function used to delete the content of the node.
 */
void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	del(lst->content);
	free(lst);
}

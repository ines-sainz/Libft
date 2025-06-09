/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:46:33 by isainz-r          #+#    #+#             */
/*   Updated: 2024/02/02 17:47:33 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Counts the number of nodes in a linked list.
 *
 * @param lst The beginning of the list.
 * @return The number of nodes in the list.
 */
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*int main()
 {
 	t_stack *lst = malloc(sizeof(t_stack));
	t_stack *temp = lst;
	while(temp != NULL)
	{
	temp->a = 1;
	temp->b = 2;
	temp->c = 3;
	temp = temp->next;
	}
	printf("%d %d %d", lst->a, lst->b, lst->c);
	 return (0);
 }
 */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:19:29 by isainz-r          #+#    #+#             */
/*   Updated: 2024/02/02 17:47:09 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Adds the node 'new' at the beginning of the list.
 *
 * @param lst A pointer to the first element of the list.
 * @param new The node to be added to the front of the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = lst[0];
	lst[0] = new;
}

/*
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

int main()
{
	t_list *element1 = malloc(sizeof(t_list));
    t_list *element2 = malloc(sizeof(t_list));

    element1->content = "Elemento 1";
    element2->content = "Elemento 2";
    element1->next = NULL;
    element2->next = NULL;
    t_list *lista = element1;
    ft_lstadd_front(&lista, element2);
    t_list *current = lista;
    while (current != NULL)
    {
        printf("Contenido: %s\n", (char *)current->content);
        current = current->next;
    }
    free(element1);
    free(element2);
}*/

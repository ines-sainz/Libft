/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:57:27 by isainz-r          #+#    #+#             */
/*   Updated: 2024/05/26 11:57:17 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Allocates and returns a new node. The member 'content' is set to  
 *        the value of the parameter 'content', and 'next' is initialized  
 *        to NULL.
 *
 * @param content The content to create the node with.
 * @return The new node, or NULL if the allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (0);
	element->content = (void *)content;
	element->next = NULL;
	return (element);
}

/*
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
int main()
{
    int *data = (int *)malloc(sizeof(int));
    *data = 42;

    t_list *newElement = ft_lstnew(data);
    if (newElement != NULL)
    {
        printf("Contenido: %d\n", *((int *)newElement->content));
        free(data);
        free(newElement);
    }
}*/

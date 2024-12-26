/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 21:15:43 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/18 21:42:07 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int main()
{
	char *a = "1";
	char *b = "2";
	char *c = "3";
	char *d = "4";
    t_list *node3 = ft_lstnew(c);
    t_list *node2 = ft_lstnew(b);
    t_list *head = ft_lstnew(a);
	t_list *new_node = ft_lstnew(d);
    //t_list *head = &node1;

	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&node2, node3);
    printf("Before function call: %s\n", (char *)head->content); // Output: 1
    t_list *last = ft_lstlast(head);
    printf("After function call: %s\n", (char *)last->content);
	ft_lstadd_back(&head, new_node);
	last = ft_lstlast(head);
    printf("Last node value: %s\n", (char *)last->content);      // Output: 3

    return 0;
}
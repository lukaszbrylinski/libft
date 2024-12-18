/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:11:36 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/18 22:16:42 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
		t_list	*tmp;
	t_list	*previous;

	if (!lst || !f)
		return ;
	tmp = lst;
	previous = lst;
	while (previous->next)
	{
		previous = tmp;
		tmp = tmp->next;
		f(previous->content);
	}
}
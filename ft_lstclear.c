/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 21:57:44 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/18 22:16:24 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*previous;

	if (!lst || !del)
		return ;
	tmp = lst;
	previous = lst;
	while (tmp->next)
	{
		previous = tmp;
		tmp = tmp->next;
		ft_lstdelone(previous, del);
	}
}
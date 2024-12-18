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
	t_list	*tmp;
	
	tmp = lst;
	if (!lst)
		return (NULL);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

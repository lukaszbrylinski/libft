/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:53:32 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/03 15:47:12 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned int		i;
	char				*ch_ptr;

	ch_ptr = (char *)ptr;
	i = 0;
	while (i < num)
	{
		ch_ptr[i] = value;
		i++;
	}
	return (ptr);
}

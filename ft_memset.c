/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:53:32 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/16 19:00:10 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t				i;
	unsigned char		*ch_ptr;
	unsigned char		val;

	val = (unsigned char)value;
	ch_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		ch_ptr[i] = val;
		i++;
	}
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:40:32 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/16 18:59:59 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*char_ptr;

	i = 0;
	char_ptr = (unsigned char *)ptr;
	value = (unsigned char)value;
	while (i < num)
	{
		if (char_ptr[i] == value)
			return ((void *)&char_ptr[i]);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:53:24 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/16 19:04:13 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ch_dest;
	unsigned char	*ch_src;

	ch_dest = (unsigned char *)dest;
	ch_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ch_dest[i] = ch_src[i];
		i++;
	}
	return (dest);
}

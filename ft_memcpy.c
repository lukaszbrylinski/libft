/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:53:24 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/03 18:39:49 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ch_dest;
	char	*ch_src;

	ch_dest = (char *)dest;
	ch_src = (char *)src;
	i = 0;
	while (n < i)
	{
		ch_src[i] = ch_dest[i];
		i++;
	}
	return (src);
}

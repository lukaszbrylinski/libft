/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:40:32 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/04 21:50:01 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t	i;
	char	*char_ptr;

	i = 0;
	char_ptr = (char *)ptr;
	value = (unsigned char *)value;
	while (char_ptr[i] && i < num)
	{
		if (char_ptr[i] == value)
			return (&char_ptr[i]);
		i++;
	}
	return (0);
}

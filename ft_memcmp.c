/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:50:42 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/08 03:07:11 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*char_ptr1;
	unsigned char	*char_ptr2;
	size_t	i;

	i = 0;
	char_ptr1 = (unsigned char *)ptr1;
	char_ptr2 = (unsigned char *)ptr2;
	while (i < num)
	{
		if (char_ptr1[i] != char_ptr2[i])
			return (char_ptr1[i] - char_ptr2[i]);
		i++;
	}
	return (0);
}

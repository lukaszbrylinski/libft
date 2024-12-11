/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:38:57 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/08 03:46:15 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*ch_dest;
	unsigned char	*ch_src;

	ch_dest = (unsigned char *)dest;
	ch_src = (unsigned char *)src;
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			ch_dest[i] = ch_src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			ch_dest[i] = ch_src[i];
		}
	}
	return (dest);
}
/*
int main() 
{ 
    char str[100] = "Learningisfun"; 
    char *first, *second; 
    first = str; 
    second = str; 
    printf("Original string :%s\n ", str); 
      
    // when overlap happens then it just ignore it 
    memcpy(first + 5, first, 10); 
    printf("memcpy overlap : %s\n ", str); 
  
    // when overlap it start from first position 
    ft_memmove(second + 5, first, 10); 
    printf("memmove overlap : %s\n ", str); 
  
    return 0; 
}
*/

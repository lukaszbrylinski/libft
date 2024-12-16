/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:30:13 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/16 21:36:32 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		str_len;
	int 	num;
	char	*num_str;
	num = n;
	str_len = 0;
	while (num > 9 || num < - 9)
	{
		num /= 10;
		str_len++;
	}
	num_str = (char *)malloc(str_len + 1);
	if (num_str == NULL)
		return (NULL);
	
}

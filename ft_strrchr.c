/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:29:56 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/08 03:16:14 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	const char	*last_occurence;

	last_occurence = NULL;
	c = (unsigned char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			last_occurence = &str[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return ((char *)last_occurence);
}

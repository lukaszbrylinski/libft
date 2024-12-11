/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 23:04:32 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/08 01:25:11 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	count_words(char *str, char seperator)
{
	int	count;

	count = 0;
	if (!*str)
		return (0);
	if (seperator == NULL)
		return (1);
	while (*str)
	{
		while (*str == seperator)
			str++;
		while (*str != seperator)
			str++;
		count++;
	}
	return (count);
}

int	*words_len(char *str, char seperator)
{
	int	*word_lens;
	int	word_len;
	int	i;

	if (!*str)
		return (0);
	if (seperator == NULL)
		return (str_len(str));
	word_lens = (int)malloc(sizeof(int) * count_words(str, seperator));
	i = 0;
	while (*str)
	{
		word_len = 0;
		while (i < count_words(str, seperator))
		{
			while (*str == seperator)
				str++;
			while (*str != seperator)
			{
				str++;
				word_len++;
			}
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	size_t	word_num;
	int		i;

	word_num = count_words(s, c);
	str_arr = (char**)malloc(word_num * sizeof(char *));
	i = 0;
	while (str_arr[i])
	{
		
	}
}

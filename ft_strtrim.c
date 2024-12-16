/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 22:35:15 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/16 19:48:53 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
size_t	get_index(char const *s1, char const set, size_t i)
{
	while (s1[i] == set && s1[i])
		i++;
	return (i);
}

size_t	get_index_reversed(char const *s1, char const set, size_t i)
{
	while (i > 0 && s1[i] == set)
	{
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	trim_len;
	size_t	i;
	char	*trim_str;

	end = ft_strlen(s1) - 1;
	start = 0;
	if (*s1 == '\0')
		return (NULL);
	if (*set == '\0')
		return ((char *)s1);
	i = 0;
	while (set[i])
	{
		start = get_index (s1, set[i], start);
		end = get_index_reversed(s1, set[ft_strlen(set) - i - 1], end);
		i++;
	}
	trim_len = end - start + 1;
	trim_str = (char *)malloc(trim_len);
	if (trim_str == NULL)
		return (NULL);
	i = 0;
	while (s1[start + i] && start + i < end)
	{
		trim_str[i] = s1[start + i];
		i++;
	}
	trim_str[i] = '\0';
	return (trim_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	int		set_len;
	int		trim_len;
	char	*trim_str;

	end = ft_strlen(s1) - 1;
	set_len = ft_strlen(set);
	start = 0;
	if (*s1 == '\0' || *set == '\0')
		return (NULL);
	start = ft_strchr(s1, set);
	end = ft_strrchr(s1, end);
	trim_str = malloc(sizeof(char *) * (end - start + 1));
	if (trim_str == NULL)
		return (NULL);
	i = 0;
	while (start + i > end)
	{
		trim_str[i] = s1[start + i];
		i++;
	}
	trim_str[i] = '\0';
	return (trim_str);
}
*/
static int	is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	get_start_index(const char *s1, const char *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	return (start);
}

static size_t	get_end_index(const char *s1, const char *set)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > 0 && is_in_set(s1[end - 1], set))
		end--;
	return (end);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	trim_len;
	size_t	i;
	char	*trim_str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	start = get_start_index(s1, set);
	end = get_end_index(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	trim_len = end - start;
	trim_str = (char *)malloc(trim_len + 1);
	if (!trim_str)
		return (NULL);
	while (i < trim_len)
	{
		trim_str[i] = s1[start + i];
		i++;
	}
	trim_str[trim_len] = '\0';
	return (trim_str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:30:13 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/17 19:25:32 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

static	int	count_digits(int n)
{
	ssize_t	num;
	int		digits;

	num = (ssize_t)n;
	if (num <= 0)
		digits = 1;
	if (num > 0)
		digits = 0;
	while (num != 0)
	{
		num /= 10;
		digits++;
	}
	digits++;
	return (digits);
}
static	void	*convert(ssize_t n, int digit_count, char *str)
{
	while (0 < digit_count)
	{
		str[digit_count - 1] = (n % 10) + '0';
		n /= 10;
		digit_count--;
	}
}

char	*ft_itoa(int n)
{
	ssize_t 	num;
	char		*num_str;
	ssize_t		num_len;

	num = (ssize_t)n;
	num_len = count_digits(num);
	num_str = (char *)malloc(num_len + 1);
	if (num_str == NULL)
		return (NULL);
	if (num < 0)
	{
		num_str[0] = '-';
		num = - num;
	}
	convert(num, num_len - (n < 0), num_str + (n > 0));
	num_str[num_len] = '\0';
	return (num_str);
}

int main()
{
	int n = -1220;
	char	*str;
	str = ft_itoa(n);
	printf("%s", str);
	return (0);
}
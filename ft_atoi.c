/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 23:20:41 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/04 23:42:11 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(const char *str)
{
	int	num;
	int	minus;
	int	cur_num;

	num = 0;
	minus = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		minus = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		cur_num = *str - '0';
		num += cur_num;
		str++;
	}
	return (minus * num);
}

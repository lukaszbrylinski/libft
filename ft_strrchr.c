/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrylins <lbrylins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:29:56 by lbrylins          #+#    #+#             */
/*   Updated: 2024/12/04 21:44:10 by lbrylins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	c = (unsigned char *)c;
	i = 0;
	while (str[i])
		i++;
	i -= 1;
	while (i > 0)
	{
		if (str[i] == c)
			return (str[i]);
		i--;
	}
	return (0);
}

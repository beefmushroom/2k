/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:59:18 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/16 18:33:04 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == 0)
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while (str[i + j] && (str[i + j] == to_find[j]))
		{
			if (to_find[j + 1] == 0)
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 08:13:21 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/10 10:49:59 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p_num;
	char	n_num;

	p_num = 'P';
	n_num = 'N';
	if (n < 0)
	{
		write(1, &n_num, 1);
	}
	else
	{
		write(1, &p_num, 1);
	}
}

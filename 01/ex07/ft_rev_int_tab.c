/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:44:27 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/11 20:05:49 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	first_idx;
	int	last_idx;
	int	temp;

	first_idx = 0;
	last_idx = size - 1;
	while (first_idx < size / 2)
	{
		temp = tab[first_idx];
		tab[first_idx] = tab[last_idx - first_idx];
		tab[last_idx - first_idx] = temp;
		first_idx++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:08:52 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/11 21:12:13 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	idx;
	int	pt;
	int	tmp;

	idx = 0;
	while (idx < size - 1)
	{	
		pt = 0;
		while (pt < size - 1 - idx)
		{
			if (tab[pt] > tab[pt + 1])
			{
				tmp = tab[pt];
				tab[pt] = tab[pt + 1];
				tab[pt + 1] = tmp;
			}
			pt++;
		}
		idx++;
	}
}

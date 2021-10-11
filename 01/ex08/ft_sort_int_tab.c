/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:08:52 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/11 20:25:27 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	idx;
	int tmp[1];
	int pt_size;
	int pt;

	pt_size = size-1;
	pt = 0;
	idx = 0;
	while(pt < pt_size)
	{	
		idx = pt;
		while (size > 0)
		{	
			tmp[0] = tab[idx];
			if (tab[idx] > tab[idx+1])
			{
				tab[idx] = tab[idx+1];
				tab[idx+1] = tmp[0];
			}
			idx++;
			size--;
		}
		pt++;
	}
}

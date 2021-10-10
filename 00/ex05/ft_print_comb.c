/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:50:46 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/10 20:32:25 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcws(int n1)
{
	if (n1 != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putnum(int n1, int n2, int n3)
{
	ft_putchar(n1 + '0');
	ft_putchar(n2 + '0');
	ft_putchar(n3 + '0');
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 0;
	n2 = 1;
	n3 = 2;
	while (n1 <= 7)
	{
		while (n2 <= 8)
		{
			while (n3 <= 9)
			{
				ft_putnum(n1, n2, n3);
				ft_putcws(n1);
				n3 += 1;
			}
			n2 += 1;
			n3 = n2 + 1;
		}
		n1 += 1;
		n2 = n1 + 1;
		n3 = n2 + 1;
	}
}

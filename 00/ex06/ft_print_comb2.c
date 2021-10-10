/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pritn_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 22:45:23 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/10 20:42:14 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_cws(void)
{
	char	c;
	char	ws;

	c = ',';
	ws = ' ';
	write(1, &c, 1);
	write(1, &ws, 1);
}

void	put_num(int a, int b)
{
	char	num[5];

	num[0] = a / 10 + '0';
	num[1] = a % 10 + '0';
	num[2] = ' ';
	num[3] = b / 10 + '0';
	num[4] = b % 10 + '0';
	write(1, &num, 5);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			put_num(a, b);
			b += 1;
			if (a + b != 198)
			{
				put_cws();
			}
		}
		a += 1;
	}
}

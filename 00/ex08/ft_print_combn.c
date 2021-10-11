/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:53:42 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/11 20:03:34 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_check[10] = {-42, -42, -42, -42, -42, -42, -42, -42, -42, -42};
char	g_combn[10];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combn(int len, int zerotonine)
{
	if (zerotonine == len)
	{
		write(1, g_combn, len);
		return ;
	}
	ft_putchar(',');
	ft_putchar(' ');
	write(1, g_combn, len);
}

void	dfs(int len, int zerotonine, int cnt)
{
	if (cnt == len)
	{
		print_combn(len, zerotonine);
		return ;
	}
	while (zerotonine < 10)
	{
		if (g_check[zerotonine] == -42)
		{
			g_check[zerotonine] = 42;
			g_combn[cnt] = zerotonine + '0';
			dfs(len, zerotonine + 1, cnt + 1);
		}
		g_check[zerotonine] = -42;
		zerotonine++;
	}
}

void	ft_print_combn(int n)
{
	dfs(n, 0, 0);
}

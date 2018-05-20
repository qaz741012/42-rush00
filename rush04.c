/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:01:46 by chlin             #+#    #+#             */
/*   Updated: 2018/05/19 16:28:14 by chlin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (j == 1)
	{
		if (i == 1)
		{
			ft_putchar('A');
			i++;
		}
		while (i < x)
		{
			ft_putchar('B');
			i++;
		}
		if (i == x)
		{
			ft_putchar('C');
		}
		ft_putchar('\n');
		j++;
		i = 1;
	}
	while (j < y)
	{
		if (i == 1)
		{
			ft_putchar('B');
			i++;
		}
		while (i < x)
		{
			ft_putchar(' ');
			i++;
		}
		if (i == x)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		j++;
		i = 1; 
	}
	if (j == y)
	{
		if (i == 1)
		{
			ft_putchar('C');
			i++;
		}
		while (i < x)
		{
			ft_putchar('B');
			i++;
		}
		if (i == x)
		{
			ft_putchar('A');
		}
	}
}

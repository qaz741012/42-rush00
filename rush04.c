/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:01:46 by chlin             #+#    #+#             */
/*   Updated: 2018/05/20 11:22:43 by chlin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void    print_column(int x, char a, char b, char c)
{
    int i;

    i = 1;
    if (i == 1)
    {
        ft_putchar(a);
        i++;
    }
    while (i < x)
    {
        ft_putchar(b);
        i++;
    }
    if (i == x)
        ft_putchar(c);
    ft_putchar('\n');
}

void    rush(int x, int y)
{
    int j;

    j = 1;
    if (j == 1)
    {
        print_column(x, 'A', 'B', 'C');
        j++;
    }
    while (j < y)
    {
        print_column(x, 'B', ' ', 'B');
        j++;
    }
    if (j == y)	
        print_column(x, 'C', 'B', 'A');
}

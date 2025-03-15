/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:04:48 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/01 11:39:52 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	y;
	int	a;
	int	b;

	a = 0;
	b = size - 1;
	while (a < b)
	{
		y = tab[a];
		tab[a] = tab[b];
		tab[b] = y;
		b--;
		a++;
	}
}

/*int	main(void)
{
	int	s[]= {1, 2, 3, 4};
	int	i = sizeof(s) / sizeof(s[0]);
	int	x;
	x = 0;

	ft_rev_int_tab(&(s[0]), i);

	while (x < i)
	{
		printf("%d", s[x]);
		x++;
	}	

	return (0);
}*/

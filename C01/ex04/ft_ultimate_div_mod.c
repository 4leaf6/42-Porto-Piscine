/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:12:26 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/01 10:45:04 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	s1;
	int	s2;

	s1 = *a / *b;
	s2 = *a % *b;
	*a = s1;
	*b = s2;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 9;
	y = 3;
	printf("before: a=%d, b=%d.\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("after: a=%d, b=%d.", x, y);
}*/

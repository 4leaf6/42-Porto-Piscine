/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:18:00 by guidos-s          #+#    #+#             */
/*   Updated: 2025/02/27 20:48:47 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	s;

	s = *a;
	*a = *b;
	*b = s;
}

/*int	main(void)
{
	int	x, y;

	x = 9;
	y = 6;

	printf("before: a=%d, b=%d.\n", x, y);
	ft_swap(&x, &y);
	printf("after: a=%d, b=%d.", x, y);
	return (0);
}*/

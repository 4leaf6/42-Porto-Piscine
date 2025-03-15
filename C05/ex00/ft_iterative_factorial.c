/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 10:14:58 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/12 13:17:36 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdlib.h>
#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	x;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	result = 1;
	x = 1;
	while (x <= nb)
	{
		result *= x;
		x++;
	}
	return (result);
}
/*
int	main(int argc, char **argv)
{
	int	y;

	if (argc == 2)
	{
		y = atoi(argv[1]);
		if (y == 0)
			printf("Usage: .out <number>");
		else
			printf("%d facorial is %d", y, ft_iterative_factorial(y));
	}
	else
		printf("Usage: .out <number>");
	return (0);
}*/

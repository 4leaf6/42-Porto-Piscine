/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:49:53 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/12 13:18:32 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdlib.h>
#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
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
			printf("%d facorial is %d", y, ft_recursive_factorial(y));
	}
	else
		printf("Usage: .out <number>");
}*/

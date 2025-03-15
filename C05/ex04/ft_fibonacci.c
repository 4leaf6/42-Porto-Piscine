/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:54:25 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/13 12:47:42 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <stdlib.h>*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int y = atoi(argv[1]);
		if (y == 0)
			printf("Usage: .out <index>");
		else
			printf("Fibonaci sequence with index %d is %d", y, ft_fibonacci(y));
    }
    else
        printf("Usage: .out <index>");
}*/

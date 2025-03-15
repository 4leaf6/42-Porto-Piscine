/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:08:43 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/12 13:16:25 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdlib.h>
#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	w;
	int	res;

	if (nb < 0)
		return (0);
	w = 1;
	res = 0;
	while (res <= nb)
	{
		res += w;
		w += 2;
		if (res == nb)
			return ((w - 1) / 2);
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int y = atoi(argv[1]);
		if (y == 0)
			printf("Usage: .out <number>");
		else
		printf("Square root of %d is %d", y, ft_sqrt(y));
	}
	else
		printf("Usage: .out <number>");
	return (0);
}*/

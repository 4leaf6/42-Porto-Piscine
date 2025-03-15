/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:00:18 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/13 12:46:46 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <stdlib.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power > 0)
	{
		while (power >= 1)
		{
			res *= nb;
			power--;
		}
	}
	else if (power < 0)
		return (0);
	else
		return (1);
	return (res);
}

/*int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int y = atoi(argv[1]);
		int z = atoi(argv[2]);
		printf("%d power %d is %d", y, z, ft_iterative_power(y, z));
	}
	else
 		printf("Usage: .out <number> <power>");
}*/

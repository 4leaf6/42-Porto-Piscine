/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:01:21 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/12 13:22:50 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdlib.h>
#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 || nb == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int y = atoi(argv[1]);
        int z = atoi(argv[2]);
        printf("%d power %d is %d", y, z, ft_recursive_power(y, z));
    }
    else
        printf("Usage: .out <number> <power>");
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 19:36:29 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/10 21:56:52 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>
#include <stdlib.h>*/

void	ft_putnbr(int nb)
{
	char	dgt;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	dgt = nb % 10 + '0';
	write(1, &dgt, 1);
}

/*int	main (int argc, char **argv)
{
	int	z = 0;

	if (argc == 2)
	{
		z = atoi(argv[1]);
		ft_putnbr(z);
	}
	else
	{
		printf("Usage: .out <number>\n");
	}
	return (0);
}*/

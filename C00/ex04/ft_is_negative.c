/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 21:21:47 by guidos-s          #+#    #+#             */
/*   Updated: 2025/02/27 17:23:36 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;

	if (n < 0)
	{
		a = 'N';
		write(1, &a, 1);
	}
	else
	{
		a = 'P';
		write(1, &a, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(-3);
	ft_is_negative(0);
	ft_is_negative(3);
	return (0);
}*/

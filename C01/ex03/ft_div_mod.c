/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:01:30 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/01 10:06:59 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("before: x=%d, y=%d.\n", x, y);
	ft_div_mod(9, 3, &x, &y);
	printf("after: x=%d, y=%d.", x, y);
}*/

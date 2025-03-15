/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:13:00 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/02 13:22:49 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_numeric(char *str)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	if (*str == 0)
	{
		return (1);
	}
	while (str[x])
	{
		y = (str[x] >= '0' && str[x] <= '9');
		if (y == 0)
		{
			return (0);
		}
		else
		{
			x++;
		}
	}
	return (1);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_str_is_numeric(argv[1]));
	}
}*/

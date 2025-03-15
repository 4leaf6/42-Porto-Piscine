/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 10:41:24 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/02 12:39:08 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_alpha(char *str)
{
	int	x;
	int	y;
	int	z;

	z = 0;
	y = 0;
	x = 0;
	if (*str == 0)
	{
		return (1);
	}
	while (str[x])
	{
		y = (str[x] >= 'A' && str[x] <= 'Z');
		z = (str[x] >= 'a' && str[x] <= 'z');
		if (y == 0 && z == 0)
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
		printf("%d\n", ft_str_is_alpha(argv[1]));
	}
}*/

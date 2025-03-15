/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:23:24 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/03 20:34:39 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_lowercase(char *str)
{
	int	x;
	int	z;

	z = 0;
	x = 0;
	if (*str == 0)
	{
		return (1);
	}
	while (str[x])
	{
		z = (str[x] >= 'a' && str[x] <= 'z');
		if (z == 0)
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
		printf("%d\n", ft_str_is_lowercase(argv[1]));
	}
}*/

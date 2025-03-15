/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:35:19 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/03 20:46:09 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_printable(char *str)
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
		z = (str[x] >= ' ' && str[x] <= '~');
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
		printf("%d\n", ft_str_is_printable(argv[1]));
	}
}*/

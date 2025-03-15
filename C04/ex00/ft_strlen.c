/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 19:07:08 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/10 21:57:26 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str++)
	{
		c++;
	}
	return (c);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Input= %s, length= %d\n", argv[1], ft_strlen(argv[1]));
	}
	else
		printf("Usage: .out <string>\n");
	return (0);
}*/

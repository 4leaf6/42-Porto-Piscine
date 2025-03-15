/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 08:09:36 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/10 21:56:11 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_atoi(char *str)
{
	int		z;
	int		m;	
	char	*c;

	m = 0;
	z = 0;
	c = str;
	while (*c >= '\t' && *c <= '\r' || *c == ' ')
		c++;
	while (*c == '-' || *c == '+')
	{
		if (*c == '-')
			m++;
		c++;
	}
	while (*c >= '0' && *c <= '9')
	{
		z = z * 10 + (*c - '0');
		c++;
	}
	if (m % 2 != 0)
		z = -z;
	return (z);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Results= %d", ft_atoi(argv[1]));
	}
	else
		printf("Usage: .out <string>");
	return (0);
}*/

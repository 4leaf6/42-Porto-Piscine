/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:48:15 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/09 11:11:31 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_strcmp(argv[1], argv[2]);
		if (ft_strcmp(argv[1], argv[2]) == 0 )
			printf("<%s> and <%s> Results= %d, S1=S2\n",
			argv[1], argv[2], ft_strcmp(argv[1], argv[2]));
		if (ft_strcmp(argv[1], argv[2]) > 0 )
			printf("<%s> and <%s> Results= %d, S1>S2\n",
			argv[1], argv[2], ft_strcmp(argv[1], argv[2]));
		if (ft_strcmp(argv[1], argv[2]) < 0)
			printf("<%s> and <%s> Results= %d, S1<S2\n",
			argv[1], argv[2], ft_strcmp(argv[1], argv[2]));
	}
	else
		printf("Usage: .out <string1> <string2>\n");
	return (0);
}*/

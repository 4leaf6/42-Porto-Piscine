/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 23:07:06 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/09 11:11:50 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}
/* 
int	is_integer(const char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
        	if (!isdigit(*str))
			return 0;
		str++;
	}
	return 1;
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (is_integer(argv[3]))
		{	
			int	z = atoi(argv[3]);
		
			ft_strncmp(argv[1], argv[2], z);
			if (ft_strncmp(argv[1], argv[2], z) == 0 )
				printf("<%s> and <%s> Results= %d, S1=S2 at index %d\n",
				argv[1], argv[2], ft_strncmp(argv[1], argv[2], z), z);
			if (ft_strncmp(argv[1], argv[2], z) > 0 )
				printf("<%s> and <%s> Results= %d, S1>S2 at index %d\n",
				argv[1], argv[2], ft_strncmp(argv[1], argv[2], z), z);
			if (ft_strncmp(argv[1], argv[2], z) < 0)
				printf("<%s> and <%s> Results= %d, S1<S2 at index %d\n",
				argv[1], argv[2], ft_strncmp(argv[1], argv[2], z), z);
		}
		else
			printf("Usage: <string1> <string2> <int index>\n");
	}
	else
		printf("Usage: .out <string1> <string2> <int index>\n");
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 20:38:34 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/09 11:22:31 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*csr;

	csr = dest;
	while (*csr)
		csr++;
	while (*src && nb > 0)
	{
		*csr = *src;
		csr++;
		src++;
		nb--;
	}
	*csr = '\0';
	return (dest);
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
			unsigned int w = (unsigned int)strtoul(argv[3], NULL, 10);

			if (w == 0 && argv[3][0] != '0')
			{
				printf("Consversion to unsigned int failed\n");
				return (1);
			}
			size_t dest_len = strlen(argv[1] + strlen(argv[2] + 1));
			char *malres = malloc(dest_len);
			strcpy(malres, argv[1]);
			printf("Dest= %s, Source= %s, Results= %s at index %d\n",
			argv[1], argv[2], ft_strncat(malres, argv[2], w), w);
		}
		else
			printf("Usage: <destiny string> <source string> <int index>");
	}
	else	
		printf("Usage: .out <destiny string> <source string> <int index>");
	return (0);
}*/

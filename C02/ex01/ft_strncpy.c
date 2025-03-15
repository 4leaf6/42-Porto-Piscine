/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 19:41:40 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/04 20:41:00 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

/*int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		unsigned int z = atoi(argv[2]);

		printf("Input = %s\n", argv[1]);

		char buffer[256];
		
		ft_strncpy(buffer, argv[1], z);
		printf("Output = %s\n", buffer);
	}
	return 0;
}*/

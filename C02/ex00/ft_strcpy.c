/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:47:07 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/03 21:39:51 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <stdlib.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char    *y = argv[1];
        	char    *z  = "caco";
        	char	*input = y;
        	int	c;
	
		printf("before: y=%s, z=%s;", y, z);

		c = 0;
		while (*y++)
		{
			c++;
		}

		z = malloc(c + 1);
	
		if (z == NULL) 
		{
        	printf("Memory allocation failed\n");
        	return 1;
        	}
		
		ft_strcpy(z, input);

		printf("after: y=%s, z=%s;", input, z);
		free (z);
	}
	return (0);
}*/

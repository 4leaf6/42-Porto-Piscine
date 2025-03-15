/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:52:59 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/01 11:01:43 by guidos-s         ###   ########.fr       */
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

/*int	main(void)
{
	char	x[] = "banana";
	int	z = ft_strlen(&(x[0]));
	printf("char count= %d.", z);
	
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 20:21:07 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/09 11:26:29 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
char	*ft_strcat(char *dest, char *src)
{
	char	*csr;

	csr = dest;
	while (*csr)
		csr++;
	while (*src)
	{
		*csr = *src;
		csr++;
		src++;
	}
	*csr = '\0';
	return (dest);
}
/*
int	main(void)
{
	char src[] = "world";
	char dest[] = "hello";
	
	ft_strcat(dest, src);
	printf("%s\n", dest);
}*/

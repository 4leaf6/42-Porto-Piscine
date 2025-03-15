/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 23:12:19 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/09 11:25:44 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
char	*ft_strstr(char *str, char *to_find)
{
	char	*h;
	char	*n;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		h = str;
		n = to_find;
		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
/*
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Src= %s, To find= %s, Results= %s\n", 
		argv[1], argv[2], ft_strstr(argv[1], argv[2]));
	}
	else
		printf("Usage: .out <string src> <to find in src>\n");
	return (0);
}*/

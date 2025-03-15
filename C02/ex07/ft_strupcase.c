/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:47:08 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/03 21:49:39 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
char	*ft_strupcase(char *str)
{
	char	*trst;

	trst = str;
	while (*trst)
	{
		if (*trst >= 'a' && *trst <= 'z')
		{
			*trst = *trst - 32;
		}
		trst++;
	}
	return (str);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n", ft_strupcase(argv[1]));
	}
}*/

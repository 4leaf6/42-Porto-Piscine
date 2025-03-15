/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:38:46 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/03 21:50:20 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
char	*ft_strlowcase(char *str)
{
	char	*trst;

	trst = str;
	while (*trst)
	{
		if (*trst >= 'A' && *trst <= 'Z')
		{
			*trst = *trst + 32;
		}
		trst++;
	}
	return (str);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n", ft_strlowcase(argv[1]));
	}
}*/

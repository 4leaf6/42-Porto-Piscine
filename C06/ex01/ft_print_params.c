/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 08:22:05 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/11 09:48:25 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	w;

	w = 1;
	if (argc > 1)
	{
		while (argv[w])
		{
			x = 0;
			while (argv[w][x])
			{
				write(1, &argv[w][x], 1);
				x++;
			}
			write(1, "\n", 1);
			w++;
		}
	}
	return (0);
}

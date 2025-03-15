/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 09:19:52 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/11 09:48:16 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	w;

	w = argc - 1;
	while (w > 0)
	{
		x = 0;
		while (argv[w][x])
		{
			write(1, &argv[w][x], 1);
			x++;
		}
		write(1, "\n", 1);
		w--;
	}
	return (0);
}

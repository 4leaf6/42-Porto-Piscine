/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guidos-s <guidos-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:36:23 by guidos-s          #+#    #+#             */
/*   Updated: 2025/03/11 09:48:32 by guidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;

	x = 0;
	if (argc > 0)
	{
		while (argv[0][x] != '\0')
		{
			write(1, &argv[0][x], 1);
			x++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

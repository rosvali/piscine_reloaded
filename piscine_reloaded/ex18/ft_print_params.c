/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:24:11 by raguillo          #+#    #+#             */
/*   Updated: 2018/11/13 18:31:05 by raguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		w;

	i = 0;
	w = 1;
	while (w < argc)
	{
		while (argv[w][i])
		{
			ft_putchar(argv[w][i]);
			i++;
		}
		w++;
		i = 0;
		ft_putchar('\n');
	}
	return (0);
}

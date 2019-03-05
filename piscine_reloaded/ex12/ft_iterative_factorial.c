/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:15:53 by raguillo          #+#    #+#             */
/*   Updated: 2018/11/13 20:05:27 by raguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		fac;

	i = 1;
	fac = 1;
	if (nb > 12)
		return (0);
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		fac = i * fac;
		i++;
	}
	return (fac);
}

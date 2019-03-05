/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:43:30 by raguillo          #+#    #+#             */
/*   Updated: 2018/11/13 20:05:53 by raguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int		fac;

	fac = 0;
	if (nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fac = nb * ft_recursive_factorial(nb - 1);
	return (fac);
}

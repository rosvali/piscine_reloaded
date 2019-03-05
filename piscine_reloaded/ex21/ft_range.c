/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:43:00 by raguillo          #+#    #+#             */
/*   Updated: 2018/11/14 11:31:57 by raguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*str;
	int		i;

	if (min >= max)
		return (NULL);
	str = (int*)malloc(sizeof(*str) * (max - min));
	i = 0;
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 09:30:50 by chford            #+#    #+#             */
/*   Updated: 2018/10/31 12:40:32 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*p;
	int		minc;
	int		i;

	if (min >= max)
		return (0);
	p = (int *)malloc(((max - min) - 1) * sizeof(int));
	minc = min;
	i = 0;
	while (minc < max)
	{
		p[i] = minc;
		minc++;
		i++;
	}
	return (p);
}

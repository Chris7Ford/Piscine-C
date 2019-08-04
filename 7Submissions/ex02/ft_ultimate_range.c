/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utlimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 08:52:41 by chford            #+#    #+#             */
/*   Updated: 2018/11/01 18:37:48 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		mincpy;

	mincpy = min;
	i = 0;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min + 1));
	while (mincpy < max)
	{
		(*range)[i] = mincpy;
		i++;
		mincpy++;
	}
	return (max - min);
}

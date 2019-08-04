/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:58:38 by chford            #+#    #+#             */
/*   Updated: 2018/11/11 15:49:35 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rush02(int x, int y, char *compare)
{
	int w;
	int h;

	w = x;
	h = y;
	while (y > 0)
	{
		x = w;
		while (x > 0)
		{
			if ((x == w && y == h) || (x == 1 && y == h))
				compare = add_to_string('A', compare);
			else if ((x == w && y == 1) || (x == 1 && y == 1))
				compare = add_to_string('C', compare);
			else if (x == w || x == 1 || y == h || y == 1)
				compare = add_to_string('B', compare);
			else
				compare = add_to_string(' ', compare);
			x--;
		}
		if (w > 0 || h > 0)
			compare = add_to_string('\n', compare);
		y--;
	}
}

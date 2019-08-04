/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:57:05 by chford            #+#    #+#             */
/*   Updated: 2018/11/11 20:58:47 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rush00(int x, int y, char *compare)
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
			if ((x == w || x == 1) && (y == h || y == 1))
				compare = add_to_string('o', compare);
			else if (x == w || x == 1)
				compare = add_to_string('|', compare);
			else if (y == h || y == 1)
				compare = add_to_string('-', compare);
			else
				compare = add_to_string(' ', compare);
			x--;
		}
		if (w > 0 || h > 0)
			compare = add_to_string('\n', compare);
		y--;
	}
}

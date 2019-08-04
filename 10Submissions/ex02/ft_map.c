/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 13:24:56 by chford            #+#    #+#             */
/*   Updated: 2018/11/06 19:58:56 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*copy;

	copy = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		copy[i] = f(tab[i]);
		i++;
	}
	return (copy);
}

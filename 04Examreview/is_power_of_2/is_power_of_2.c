/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:02:06 by chford            #+#    #+#             */
/*   Updated: 2018/11/12 13:12:04 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	int		half;
	int		i;

	half = (n / 2) + 1;
	i = 0;
	while (i < half)
	{
		if(i * i == n)
			return (1);
		i++;
	}
	return (0);
}

int		main(void)
{
	int		test;

	test = 131;
	printf("%d", is_power_of_2(test));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 11:59:32 by chford            #+#    #+#             */
/*   Updated: 2018/10/26 12:30:17 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int total;

	total = 1;
	i = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i >= 1)
	{
		total = total * i;
		i--;
	}
	printf("%d", total);
	return (total);
}

int		main(void)
{
	int x;

	x = 4;
	ft_iterative_factorial(x);
	return(0);
}

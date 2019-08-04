/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 13:57:14 by chford            #+#    #+#             */
/*   Updated: 2018/10/26 15:00:55 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, (power - 1)));
}

int		main(void)
{
	int nb;
	int power;

	nb = 2;
	power = 5;
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}

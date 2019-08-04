/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 12:33:15 by chford            #+#    #+#             */
/*   Updated: 2018/10/26 13:16:46 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

int		main(void)
{
	int x;

	x = 10;
	printf("%d", ft_recursive_factorial(x));
	return (0);
}

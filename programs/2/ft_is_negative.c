/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:06:44 by chford            #+#    #+#             */
/*   Updated: 2018/10/24 17:02:31 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_is_negative(int n)
{
	char a;

	if (n < 0)
	{
		a = 'N';
	}
	else
	{
		a = 'P';
	}
	ft_putchar(a);
}

int		main(void)
{
	ft_is_negative(-40);
	return (0);
}

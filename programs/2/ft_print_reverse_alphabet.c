/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 12:38:39 by chford            #+#    #+#             */
/*   Updated: 2018/10/24 16:59:14 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	char x;

	x = 'z';
	while (x >= 'a')
	{
		ft_putchar(x);
		x = x - 1;
	}
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}

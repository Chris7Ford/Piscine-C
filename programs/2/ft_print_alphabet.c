/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 12:38:39 by chford            #+#    #+#             */
/*   Updated: 2018/10/25 06:27:13 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		ft_putchar(x);
		x = x + 1;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}

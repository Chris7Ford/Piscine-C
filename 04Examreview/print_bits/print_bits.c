/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 09:36:55 by chford            #+#    #+#             */
/*   Updated: 2018/11/12 10:25:46 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	i;

	i = 128;
	while (i != 0)
	{
		if (octet & i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i = i >> 1;
	}
}

int		main(void)
{
	unsigned char x;

	x = 40;
	print_bits(x);
	return (0);
}

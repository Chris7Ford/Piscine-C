/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:20:23 by chford            #+#    #+#             */
/*   Updated: 2018/11/12 12:37:30 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			print_bits(unsigned char octet)
{
	unsigned char	j;

	j = 128;
	while (j != 0)
	{
		if (j & octet)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		j = j >> 1;
	}
	write(1, "\n", 1);
}

unsigned char	reverse_bits(unsigned char octet)
{
	octet = ((240 & octet) >> 4) | ((15 & octet) << 4);
	//1111 0000						0000 1111
	octet = ((204 & octet) >> 2) | ((51 & octet) << 2);
	//1100 1100						0011 0011
	octet = ((170 & octet) >> 1) | ((85 & octet) << 1);
	//1010 1010						0101 0101
	return (octet);
}

int				main(void)
{
	unsigned char	x;

	x = 38;
	print_bits(x);
	print_bits(reverse_bits(x));
	return (0);
}

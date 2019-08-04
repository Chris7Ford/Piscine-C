/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 09:43:41 by chford            #+#    #+#             */
/*   Updated: 2018/11/13 10:04:00 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	print_hex(int num)
{
	char	c;
	if (num >= 16)
		print_hex(num / 16);
	num = num % 16;
	if (num < 10)
		c = (num + '0');
	else
		c = ((num - 10) + 'a');
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		num;

	if (argc != 2 || atoi(argv[1]) == 0)
		return (1);
	num = atoi(argv[1]);
	print_hex(num);
	write(1, "\n", 1);
	return (0);
}

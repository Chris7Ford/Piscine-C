/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:57:06 by chford            #+#    #+#             */
/*   Updated: 2018/11/06 12:23:56 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int		answer;

	if (verify(argc, argv) && zero_check(argv))
	{
		answer = determine(argv);
		ft_putnbr(answer);
	}
	ft_putchar('\n');
	return (0);
}

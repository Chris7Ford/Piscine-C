/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 09:09:56 by chford            #+#    #+#             */
/*   Updated: 2018/11/10 11:24:11 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int ac, char **av)
{
	if (ac > 1)
	{
//		ft_putnbr(eval_expr(av[1]));
//		ft_putchar('\n');
		eval_expr(av[1]);
	}
	return (0);
}

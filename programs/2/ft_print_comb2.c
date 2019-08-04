/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 07:18:11 by chford            #+#    #+#             */
/*   Updated: 2018/10/25 10:11:11 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb2(void)
{
	int n[5];

	n[0] = '0';
	n[1] = '0';
	n[2] = '0';
	n[3] = '0';
	n[4] = 3;
	while (n[4] >= 0)
	{
		while (n[n[4]] < '9')
		{
			n[n[4]]++;
			if (n[0] == n[2] && n[1] == n[3])
				continue ;
			ft_putchar(n[0]);
			ft_putchar(n[1]);
			ft_putchar(' ');
			ft_putchar(n[3]);
			ft_putchar(n[2]);
			ft_putchar(',');
			ft_putchar(' ');
		}
		n[4]--;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 13:34:37 by chford            #+#    #+#             */
/*   Updated: 2018/10/24 17:00:20 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_put_char(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		ft_put_char(n);
		n = n + 1;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}

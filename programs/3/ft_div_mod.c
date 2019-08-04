/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:19:10 by chford            #+#    #+#             */
/*   Updated: 2018/10/25 16:26:37 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	printf("%d", *div);

	printf("\n");

	*mod = a % b;
	printf("%d", *mod);
}

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 13;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	return (0);
}

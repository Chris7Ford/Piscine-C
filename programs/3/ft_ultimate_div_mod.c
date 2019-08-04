/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:37:02 by chford            #+#    #+#             */
/*   Updated: 2018/10/25 18:37:09 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
}

int		main(void)
{
	int a;

	int b;

	a = 10;
	b = 4;
	ft_ultimate_div_mod(&a, &b);

	printf("%d", a);
	printf("/n");
	printf("%d", b);
	return (0);
}

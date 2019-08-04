/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 10:37:49 by chford            #+#    #+#             */
/*   Updated: 2018/10/25 12:50:29 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int 	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}
*/
void	ft_ft(int *nbr)
{

	printf("%d", *nbr);
	printf("\n");
	printf("%p", nbr);
	printf("\n");

	*nbr = 42;


	printf("%d", *nbr);
	printf("\n");
	printf("%p", nbr);
	printf("\n");
}

int		main(void)
{	
	int a;
	a = 3;
	ft_ft(&a);
	return(0);
}

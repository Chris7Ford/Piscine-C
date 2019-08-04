/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 13:16:59 by chford            #+#    #+#             */
/*   Updated: 2018/10/25 15:04:49 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	//We are given the (address of the adress) times 9 of a variable in the main function
	//We have to trail it all the way back up to its actual value
	//in this instance, it is an int, so we reference it with %d
	printf("%d", *********nbr);
	*********nbr = 42;
	printf("\n");
	printf("%d", *********nbr);

}


int main(void)
{
	int x;
	int* a;
	int** b;
	int*** c;
	int**** d;
	int***** e;
	int****** f;
	int******* g;
	int******** h;
	int********* i;

	a = &x;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;


	x = 4;
	x = 4;
	ft_ultimate_ft(i);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:17:35 by chford            #+#    #+#             */
/*   Updated: 2018/10/25 16:01:26 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int holder;
	//In the function declaration, we are stating that we expect a pointer
	//
	//Below when we call the printf function, we are calling the expicit value of the pointer
	//it would looke like this => printf("%d", *int* a)
	//because the data type is int* or int *
	
	printf("%s", "The orignal value for x = ");
	printf("%d", *a);
	printf("\n");
	printf("%s", "The orignal value for y = ");
	printf("%d", *b);
	printf("\n");


	printf("%s", "We are placing the value of x into a placeholder");
	printf("\n");
	holder = *a;
	printf("%s", "And putting y into x");
	printf("\n");
	*a = *b;
	*b = holder;
	printf("%s", "And now the value of x is: ");
	printf("%d", *a);
	
	printf("%s", "And now the value of y is: ");
	printf("%d", *b);

}


int		main()
{
	int x;
	int y;

	x = 9;
	y = 1;

	int* a;
	int* b;

	a = &x;
	b = &y;

	ft_swap(a, b);

	return (0);
}

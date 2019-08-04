/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 09:47:17 by chford            #+#    #+#             */
/*   Updated: 2018/10/28 15:06:43 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void sastantua(int size)
{
	int total_lines_per_section;
	int i;
	int chars_added;

	i = 0;
	//This while loop is to get the number of lines per section
	while (i < size)
	{
	total_lines_per_section = size + 2;
	i++;
	}
	//End number of lines per section
	
	

	//Need to make a loop to get the number of chars on the last line for any section
	i = 4;
	chars_added = 6;
	while (i <= size)
	{
		if (i % 2 == 0)
			chars_added += 2;
		i++;
	}
	printf("The number of chars added to this section at change is: %d\n", chars_added);
	printf("size = %d\n\n", size);
	
	
	
	
	
	//End last line for each section
	printf("total lines for this section: %d\n", total_lines_per_section);
}

int		main(void)
{
	sastantua(0);
	sastantua(1);
	sastantua(2);
	sastantua(3);
	sastantua(4);
/*	sastantua(5);
	sastantua(6);
	sastantua(7);
*/	return (0);
}

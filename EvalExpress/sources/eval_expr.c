/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 10:15:09 by chford            #+#    #+#             */
/*   Updated: 2018/11/10 19:05:24 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

char	*eval_expr(char *expression)
{
	char	*string;
	t_list	*elem;
	t_list	*begin;

	begin = 0;
	if (allocate_parenthesis(expression))
	{
		string = allocate_parenthesis(expression);
		string = create_section(expression, string);
	}
	else
	{
		////BEGIN MULTIPLICATION HERE///////
		string = (char *)malloc(sizeof(char) * 50);
		string = expression;
	}
	elem = add_arithmetic_queue(&begin, string);
	while(elem)
	{
		printf("%d", elem->number);
		printf("%c", elem->next_op);
		elem = elem->next;
	}
	return (string);
}

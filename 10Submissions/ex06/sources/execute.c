/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 21:16:44 by chford            #+#    #+#             */
/*   Updated: 2018/11/06 12:30:01 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		determine(char **argv)
{
	int		num1;
	int		num2;
	int		answer;
	char	operator;

	operator = argv[2][0];
	answer = 0;
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	if (operator == '+')
		answer = evaluate(num1, num2, add);
	else if (operator == '-')
		answer = evaluate(num1, num2, subtract);
	else if (operator == '*')
		answer = evaluate(num1, num2, multiply);
	else if (operator == '/')
		answer = evaluate(num1, num2, divide);
	else if (operator == '%')
		answer = evaluate(num1, num2, modulus);
	return (answer);
}

int		evaluate(int num1, int num2, int (*f)(int, int))
{
	int		answer;

	answer = f(num1, num2);
	return (answer);
}

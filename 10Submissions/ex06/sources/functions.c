/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 21:24:47 by chford            #+#    #+#             */
/*   Updated: 2018/11/06 12:08:40 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		add(int num1, int num2)
{
	return (num1 + num2);
}

int		subtract(int num1, int num2)
{
	return (num1 - num2);
}

int		multiply(int num1, int num2)
{
	return (num1 * num2);
}

int		divide(int num1, int num2)
{
	return (num1 / num2);
}

int		modulus(int num1, int num2)
{
	return (num1 % num2);
}

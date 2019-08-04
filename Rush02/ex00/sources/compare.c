/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:56:14 by chford            #+#    #+#             */
/*   Updated: 2018/11/11 22:47:23 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

char	*allocate_comparison(int height, int width, char *compare)
{
	int		i;

	i = 0;
	compare = (char *)malloc(sizeof(char) * (((height * width) + height)));
	while (i <= ((height * width) + height - 1))
	{
		compare[i] = '0';
		i++;
	}
	compare[((height * width) + height)] = '\0';
	return (compare);
}

void	mash_input(t_main_obj *obj)
{
	int		i;
	int		j;
	t_list	*elem;

	i = 0;
	j = 0;
	elem = obj->begin_list;
	while (elem)
	{
		while (elem->string[j] != '\0' && j <= BUF_SIZE)
		{
			obj->received[i] = elem->string[j];
			i++;
			j++;
		}
		j = 0;
		elem = elem->next;
	}
}

void	print_result(int i, int count, t_main_obj *obj, int *printed_count)
{
	if (count > 1)
	{
		write(1, "[colle-0", 8);
		ft_putnbr(i);
		write(1, "] [", 3);
		ft_putnbr(obj->width);
		write(1, "] [", 3);
		ft_putnbr(obj->height);
		write(1, "]", 1);
		if (*printed_count < (count - 1))
		{
			write(1, " || ", 4);
			*printed_count += 1;
		}
	}
	else
	{
		write(1, "[rush-0", 7);
		ft_putnbr(i);
		write(1, "] [", 3);
		ft_putnbr(obj->width);
		write(1, "] [", 3);
		ft_putnbr(obj->height);
		write(1, "]", 1);
	}
}

int		compare_count(t_main_obj *obj)
{
	int		count;

	count = 0;
	write_zeros(obj->expected);
	rush00(obj->width, obj->height, obj->expected);
	if (ft_strcmp(obj->expected, obj->received) == 0)
		count += 1;
	write_zeros(obj->expected);
	rush01(obj->width, obj->height, obj->expected);
	write_zeros(obj->expected);
	if (ft_strcmp(obj->expected, obj->received) == 0)
		count += 1;
	write_zeros(obj->expected);
	rush02(obj->width, obj->height, obj->expected);
	if (ft_strcmp(obj->expected, obj->received) == 0)
		count += 1;
	write_zeros(obj->expected);
	rush03(obj->width, obj->height, obj->expected);
	if (ft_strcmp(obj->expected, obj->received) == 0)
		count += 1;
	write_zeros(obj->expected);
	rush04(obj->width, obj->height, obj->expected);
	if (ft_strcmp(obj->expected, obj->received) == 0)
		count += 1;
	return (count);
}

void	compare(t_main_obj *obj)
{
	int		count;
	int		printed_count;

	printed_count = 0;
	count = compare_count(obj);
	write_zeros(obj->expected);
	rush00(obj->width, obj->height, obj->expected);
	if (ft_strcmp(obj->expected, obj->received) == 0)
		print_result(0, count, obj, &printed_count);
	write_zeros(obj->expected);
	rush01(obj->width, obj->height, obj->expected);
	if (ft_strcmp(obj->expected, obj->received) == 0)
		print_result(1, count, obj, &printed_count);
	write_zeros(obj->expected);
	rush02(obj->width, obj->height, obj->expected);
	if (ft_strcmp(obj->expected, obj->received) == 0)
		print_result(2, count, obj, &printed_count);
	write_zeros(obj->expected);
	rush03(obj->width, obj->height, obj->expected);
	if (ft_strcmp(obj->expected, obj->received) == 0)
		print_result(3, count, obj, &printed_count);
	write_zeros(obj->expected);
	rush04(obj->width, obj->height, obj->expected);
	if (ft_strcmp(obj->expected, obj->received) == 0)
		print_result(4, count, obj, &printed_count);
}

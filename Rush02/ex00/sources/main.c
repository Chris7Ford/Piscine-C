/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:42:41 by chford            #+#    #+#             */
/*   Updated: 2018/11/11 23:10:28 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

t_list	*read_input(t_main_obj *obj)
{
	int		ret;
	char	input[BUF_SIZE + 1];

	while ((ret = read(0, input, BUF_SIZE)))
	{
		input[ret] = '\0';
		push_queue(&obj->begin_list, input);
		obj->width += get_width(input);
		obj->height += get_height(input);
	}
	if (ret == -1)
		return (0);
	obj->expected = allocate_comparison(obj->height, obj->width, obj->expected);
	obj->received = allocate_comparison(obj->height, obj->width, obj->received);
	return (obj->begin_list);
}

int		main(void)
{
	t_main_obj	*obj;
	int			i;

	i = 0;
	while (i < 99999)
		i++;
	obj = (t_main_obj *)malloc(sizeof(t_main_obj));
	obj->height = 0;
	obj->width = 0;
	obj->expected = 0;
	obj->received = 0;
	obj->begin_list = 0;
	obj->begin_list = read_input(obj);
	mash_input(obj);
	compare(obj);
	ft_putchar('\n');
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_handling.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 21:10:59 by chford            #+#    #+#             */
/*   Updated: 2018/11/11 08:23:01 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*ft_create_elem(char *buffer)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	ft_strcpy(element->string, buffer);
	element->next = NULL;
	return (element);
}

void	push_queue(t_list **begin_list, char *buffer)
{
	t_list	*pointer;

	if (*begin_list)
	{
		pointer = *begin_list;
		while (pointer->next)
			pointer = pointer->next;
		pointer->next = ft_create_elem(buffer);
	}
	else
	{
		*begin_list = ft_create_elem(buffer);
		pointer = *begin_list;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_handle_chars.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:47:50 by chford            #+#    #+#             */
/*   Updated: 2018/11/10 19:02:58 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*ft_create_arithmetic_elem(char *string)
{
	t_list *element;

	element = (t_list *)malloc(sizeof(t_list));
	element->number = ft_atoi(string);
	element->next_op = get_operator(string);
	element->next = NULL;
	return (element);
}

t_list	*add_arithmetic_queue(t_list **begin_list, char *string)
{
	t_list	*pointer;

	if (*begin_list)
	{
		pointer = *begin_list;
		while(pointer->next)
			pointer = pointer->next;
		pointer->next = ft_create_arithmetic_elem(string);
	}
	else
	{
		*begin_list = ft_create_arithmetic_elem(string);
		pointer = *begin_list;
	}
	return (pointer);
}

char	get_operator(char *string)
{
	int		i;

	i = 0;
	while (string[i])
	{
		if (string[i] == '+')
			return ('+');
		else if (string[i] == '-')
			return ('-');
		else if (string[i] == '*')
			return ('*');
		else if (string[i] == '/')
			return ('/');
		else if (string[i] == '%')
			return ('%');
		i++;
	}
		return ' ';
}

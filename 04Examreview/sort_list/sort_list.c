/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:52:38 by chford            #+#    #+#             */
/*   Updated: 2018/11/15 16:50:13 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_create_elem(int data)
{
	t_list	*element;

	element = (t_list*)malloc(sizeof(t_list));
	element->next = NULL;
	element->data = data;
	return (element);
}

void	ft_push_back_list(t_list **begin_list, int data)
{
	t_list	*elem;

	if (*begin_list)
	{
		elem = *begin_list;
		while (elem->next)
			elem = elem->next;
		elem->next = ft_create_elem(data);
	}
	else
	{
		elem = ft_create_elem(data);
		*begin_list = elem;
	}
}

void	print_list(t_list *begin)
{
	t_list	*elem;

	if (begin)
	{
		elem = begin;
		while (elem)
		{
			printf("%d\n", elem->data);
			elem = elem->next;
		}
	}
	return ;
}

int		ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list *list, int (*cmp)(int, int))
{
	int		s;
	int		hold;
	t_list	*begin;

	begin = list;
	s = 1;
	while (s == 1)
	{
		s = 0;
		while (list->next)
		{
			if (!(cmp(list->data, list->next->data)))
			{
				hold = list->data;
				list->data = list->next->data;
				list->next->data = hold;
				s = 1;
			}
			list = list->next;
		}
		list = begin;
	}
	return (begin);
}

int		main(void)
{
	t_list	*list;

	list = 0;
	ft_push_back_list(&list, 35);
	ft_push_back_list(&list, 24);
	ft_push_back_list(&list, 76);
	ft_push_back_list(&list, 12);
	ft_push_back_list(&list, 1543);
	ft_push_back_list(&list, 232);
	ft_push_back_list(&list, 124);
	ft_push_back_list(&list, 6);
	ft_push_back_list(&list, 12);
	print_list(list);
	printf("SORTED:\n\n");
	list = sort_list(list, ascending);
	print_list(list);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 20:37:01 by chford            #+#    #+#             */
/*   Updated: 2018/11/07 20:03:19 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*old;
	int		i;

	i = 0;
	list = NULL;
	while (i < ac)
	{
		old = list;
		list = ft_create_elem(av[i]);
		list->next = old;
		i++;
	}
	return (list);
}

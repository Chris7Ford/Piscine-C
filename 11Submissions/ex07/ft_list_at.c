/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 07:03:36 by chford            #+#    #+#             */
/*   Updated: 2018/11/07 19:48:16 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*element;

	if (!begin_list)
		return (0);
	element = begin_list;
	i = 0;
	while (element && i < nbr)
	{
		element = element->next;
		i++;
	}
	if (i != nbr)
		return (0);
	return (element);
}

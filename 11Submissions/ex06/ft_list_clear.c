/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 06:39:24 by chford            #+#    #+#             */
/*   Updated: 2018/11/07 20:57:39 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*hold;
	t_list	*oncoming;

	hold = *begin_list;
	while (hold)
	{
		oncoming = hold;
		free(hold);
		hold = oncoming->next;
	}
	*begin_list = 0;
}

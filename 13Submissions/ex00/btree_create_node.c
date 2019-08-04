/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:09:11 by chford            #+#    #+#             */
/*   Updated: 2018/11/09 22:43:15 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree		*new;

	new = (t_btree *)malloc(sizeof(t_btree));
	new->left = NULL;
	new->right = NULL;
	new->item = item;
	return (new);
}

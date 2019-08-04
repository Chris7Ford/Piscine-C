/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 07:54:49 by chford            #+#    #+#             */
/*   Updated: 2018/11/09 22:45:19 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		(*applyf)(root->item);
	}
	if (root != NULL && root->left != NULL)
	{
		btree_apply_prefix(root->left, applyf);
	}
	if (root != NULL && root->right != NULL)
	{
		btree_apply_prefix(root->right, applyf);
	}
	return ;
}

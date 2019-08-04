/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 08:13:41 by chford            #+#    #+#             */
/*   Updated: 2018/11/09 22:46:15 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL && root->left != NULL)
	{
		btree_apply_prefix(root->left, applyf);
	}
	if (root != NULL)
	{
		(*applyf)(root->item);
	}
	if (root != NULL && root->right != NULL)
	{
		btree_apply_prefix(root->right, applyf);
	}
	return ;
}

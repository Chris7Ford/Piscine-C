/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 08:35:20 by chford            #+#    #+#             */
/*   Updated: 2018/11/09 22:47:54 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL && root->left != NULL)
	{
		btree_apply_prefix(root->left, applyf);
	}
	if (root != NULL && root->right != NULL)
	{
		btree_apply_prefix(root->right, applyf);
	}
	if (root != NULL)
	{
		(*applyf)(root->item);
	}
	return ;
}

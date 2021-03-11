/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 21:34:29 by bpatrici          #+#    #+#             */
/*   Updated: 2021/03/05 21:51:44 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	t_btree *tree;

	if (root)
	{
		if (root->left)
			btree_apply_prefix(root->left, applyf);
		applyf(root->item);
		if (root->right)
			btree_apply_prefix(root->right, applyf);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 19:38:28 by bpatrici          #+#    #+#             */
/*   Updated: 2021/03/05 21:33:50 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *tree;

	tree = malloc(sizeof(t_btree));
	if (tree)
	{
		tree->item = item;
		tree->right = 0;
		tree->left = 0;
	}
	return (tree);
}

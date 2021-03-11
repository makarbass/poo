/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:32:13 by bpatrici          #+#    #+#             */
/*   Updated: 2021/03/04 19:05:07 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*first;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		first = ft_create_elem(data);
		first->next = *begin_list;
		*begin_list = first;
	}
}

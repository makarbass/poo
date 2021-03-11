/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 04:02:22 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/26 20:47:08 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	j;
	int	*t;
	int	*h;

	j = 0;
	h = &j;
	if (min >= max)
		return (h);
	t = (int*)malloc(sizeof(int) * (max - min));
	if (t == NULL)
		return (NULL);
	while (j < max - min)
	{
		t[j] = min + j;
		j++;
	}
	return (t);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 21:09:24 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/26 21:40:01 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int j;
	int *t;
	int *h;
	int *str;

	j = 0;
	if (max - min < 0)
		return (-1);
	if (min >= max)
	{
		h = &j;
		return (0);
	}
	t = (int*)malloc(sizeof(int) * (max - min));
	while (j < max - min)
	{
		t[j] = min + j;
		j++;
	}
	return (j);
}

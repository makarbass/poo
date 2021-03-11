/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <bpatrici@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:06:59 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/18 05:38:15 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char k;

	if (n < 0)
	{
		k = 'N';
	}
	else
	{
		k = 'P';
	}
	write(1, &k, 1);
	write(1, "\n", 1);
}

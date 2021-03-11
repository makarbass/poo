/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <bpatrici@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:58:07 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/17 20:13:39 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char sym;

	sym = 48;
	while (sym <= 57)
	{
		write(1, &sym, 1);
		sym = sym + 1;
	}
	write(1, "\n", 1);
}

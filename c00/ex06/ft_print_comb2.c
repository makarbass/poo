/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <bpatrici@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 02:53:41 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/18 05:35:14 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int n;
	int m;

	n = 0;
	while (n < 99)
	{
		m = n + 1;
		while (m <= 99)
		{
			ft_putchar(n / 10 + '0', n % 10 + '0');
			write(1, " ", 1);
			ft_putchar(m / 10 + '0', m % 10 + '0');
			if (n < 98)
			{
				write(1, ", ", 2);
			}
			m++;
		}
		n++;
	}
}

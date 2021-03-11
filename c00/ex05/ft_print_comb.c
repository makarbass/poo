/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <bpatrici@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 02:26:20 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/18 05:38:42 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void);

void	ft_printchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 48;
	while (a < 56)
	{
		b = a + 1;
		c = b + 1;
		while (b <= 57)
		{
			while (c <= 57)
			{
				ft_printchar(a, b, c);
				c++;
				if (a != 55)
				{
					write(1, ", ", 2);
				}
			}
			b++;
			c = b + 1;
		}
		a++;
	}
}

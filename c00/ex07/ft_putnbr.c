/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <bpatrici@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 03:19:56 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/18 05:39:57 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int b;
	int c;

	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	b = nb;
	c = 1;
	while (b > 10)
	{
		b = b / 10;
		c = c * 10;
	}
	while (nb > 10)
	{
		ft_putchar(nb / c + '0');
		nb = nb % c;
		c = c / 10;
	}
	ft_putchar(nb + '0');
}

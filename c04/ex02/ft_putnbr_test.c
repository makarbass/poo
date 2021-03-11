/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <bpatrici@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 03:19:56 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/22 17:48:11 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int main()
{
	int a = -2147483648;
	int b = 2147483647;
	int c = 0;
	int d = 40;

	ft_putnbr(a);
	write(1, "\n", 1);
	ft_putnbr(b);
	write(1, "\n", 1);
	ft_putnbr(c);
	write(1, "\n", 1);
	ft_putnbr(d);
	write(1, "\n", 1);
}

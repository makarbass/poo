/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:20:27 by bpatrici          #+#    #+#             */
/*   Updated: 2021/03/03 18:28:25 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	oper(char argv)
{
	if (argv == '+')
		return (0);
	if (argv == '-')
		return (1);
	if (argv == '*')
		return (2);
	if (argv == '/')
		return (3);
	if (argv == '%')
		return (4);
	return (5);
}

int		ft_calc(int a, int b, char *argv)
{
	int sign;
	int (*ptr[5])(int, int);

	ptr[0] = summ;
	ptr[1] = razn;
	ptr[2] = umn;
	ptr[3] = del;
	ptr[4] = mod;
	if (argv[1] != '\0')
		return (0);
	sign = oper(argv[0]);
	if (sign == 5)
		return (0);
	return (ptr[sign](a, b));
}

int		check_zero(int b, char *c)
{
	if (b == 0 && c[0] == '/')
	{
		ft_putstr("Stop : division by zero");
		return (1);
	}
	if (b == 0 && c[0] == '%')
	{
		ft_putstr("Stop : modulo by zero");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (check_zero(ft_atoi(argv[3]), argv[2]) == 0)
			ft_putnbr(ft_calc(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2]));
		ft_putstr("\n");
	}
	return (0);
}

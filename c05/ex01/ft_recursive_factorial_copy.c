/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:02:36 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/23 15:20:39 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int main()
{
	printf("%d\n",ft_recursive_factorial(0));
	printf("%d\n",ft_recursive_factorial(-2));
	printf("%d\n",ft_recursive_factorial(1));
	printf("%d\n",ft_recursive_factorial(2));
	printf("%d\n",ft_recursive_factorial(3));
	printf("%d\n",ft_recursive_factorial(4));
	printf("%d\n",ft_recursive_factorial(5));
}
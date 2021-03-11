/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:45:21 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/23 15:15:40 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	else
		while (nb > 0)
		{
			i = nb * i;
			nb--;
		}
	return (i);
}

int main()
{
	printf("%d\n",ft_iterative_factorial(0));
	printf("%d\n",ft_iterative_factorial(-2));
	printf("%d\n",ft_iterative_factorial(1));
	printf("%d\n",ft_iterative_factorial(2));
	printf("%d\n",ft_iterative_factorial(3));
	printf("%d\n",ft_iterative_factorial(4));
	printf("%d\n",ft_iterative_factorial(5));
}
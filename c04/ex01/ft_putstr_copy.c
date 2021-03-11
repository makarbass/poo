/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:43:28 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/19 11:49:56 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
}

int	main()
{
	char *s = "1234567890";
	char *s1 = "qwerty";
	char *s2 = "1\t1";
	char *s3 = "12\0 34";

	ft_putstr(s);
	write(1, "\n", 1);
	ft_putstr(s1);
	write(1, "\n", 1);
	ft_putstr(s2);
	write(1, "\n", 1);
	ft_putstr(s3);
	write(1, "\n", 1);
}

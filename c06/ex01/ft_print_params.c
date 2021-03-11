/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 04:58:23 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/24 06:05:27 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	j = 0;
	while (i < argc)
	{
		str = argv[i];
		while (str[j])
		{
			write(1, str + j, 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}

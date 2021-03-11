/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 06:06:25 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/24 06:23:35 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		count;
	char	*str;

	i = 1;
	j = 0;
	count = 0;
	while (i < argc)
		i++;
	while (i > 1)
	{
		str = argv[i - 1];
		while (str[j])
		{
			write(1, str + j, 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i--;
	}
}

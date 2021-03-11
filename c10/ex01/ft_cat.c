/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:13:38 by bpatrici          #+#    #+#             */
/*   Updated: 2021/03/02 19:02:18 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		ret;
	char	buf[30000];

	i = 1;
	if (argc == 1)
	{
		while (read(0, &argv, 1))
			write(1, &argv, 1);
		return (0);
	}
	while (i <= argc - 1)
	{
		fd = open(argv[i], O_RDONLY);
		ret = read(fd, buf, 30000);
		ft_putstr(buf);
		close(fd);
		i++;
	}
}

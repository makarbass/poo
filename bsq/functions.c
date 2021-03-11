/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:45:50 by bpatrici          #+#    #+#             */
/*   Updated: 2021/03/10 21:07:38 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		countlines(int fd, char o)
{
	int		i;
	int		j;
	int		max;

	i = 0;
	j = 0;
	max = 0;
	while (read(fd, &o, 1))
	{
		if (o == '\n')
		{
			i++;
			if (max != j)
				map_error();
			max = 0;
		}
		if (i == 1)
			j++;
		if (i != 0)
			max++;
	}
	if (i - 1 == 0 || j - 1 == 0)
		map_error();
	close(fd);
	return (i - 1);
}

int		countcolumns(char *argv)
{
	int		fd;
	int		j;
	int		i;
	char	o;

	i = 0;
	j = 0;
	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &o, 1))
	{
		if (o == '\n')
			i++;
		if (i == 1)
			j++;
		if (i > 1)
		{
			close(fd);
			return (j - 1);
		}
	}
	return (0);
}

int		syminline(int i)
{
	int p;

	p = 0;
	while (i > 0)
	{
		p++;
		i = i / 10;
	}
	return (p);
}

int		openfile(char *argv)
{
	int		fd;
	char	o;

	o = '\0';
	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (0);
	return (countlines(fd, o));
}

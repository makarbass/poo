/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbols.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:54:14 by bpatrici          #+#    #+#             */
/*   Updated: 2021/03/10 21:25:06 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		firstlinenums(int p, int fd, char o, int i)
{
	int vvod;

	vvod = 0;
	while (p > 0)
	{
		read(fd, &o, 1);
		vvod *= 10;
		vvod += ((int)o - '0');
		p--;
	}
	if (vvod != i)
		map_error();
	return (p);
}

char	signs(char empty, char full, char chres, int q)
{
	if (empty == '\0' || full == '\0' || chres == '\0' ||
			empty == full || empty == chres || full == chres)
		map_error();
	if (q == 1)
		return (empty);
	if (q == 2)
		return (full);
	if (q == 3)
		return (chres);
	return ('0');
}

char	firstline(char *argv, int p, int q, int i)
{
	int		fd;
	char	empty;
	char	full;
	char	chres;
	char	o;

	empty = '\0';
	full = '\0';
	chres = '\0';
	o = '\0';
	fd = open(argv, O_RDONLY);
	p = firstlinenums(p, fd, o, i);
	while (p + 4 > 0)
	{
		read(fd, &o, 1);
		if (empty == '\0')
			empty = o;
		else if (full == '\0')
			full = o;
		else if (chres == '\0')
			chres = o;
		p--;
	}
	if (o != '\n')
		map_error();
	close(fd);
	return (signs(empty, full, chres, q));
}

int		**arrofsymbs(char *argv, int k, int **arr)
{
	int		i;
	int		j;
	char	o;
	int		fd;

	i = 0;
	j = 0;
	o = '\0';
	fd = open(argv, O_RDONLY);
	while (o != '\n')
		read(fd, &o, 1);
	while (k > 0)
	{
		read(fd, &o, 1);
		if (o == '\n')
		{
			i++;
			j = 0;
			read(fd, &o, 1);
		}
		arr[i][j] = (int)o;
		k--;
		j++;
	}
	close(fd);
	return (arr);
}

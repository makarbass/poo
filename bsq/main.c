/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:36:35 by harsenal          #+#    #+#             */
/*   Updated: 2021/03/10 21:35:31 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		min(int a, int b, int c)
{
	if (a == 0 || b == 0 || c == 0)
		return (1);
	if (a <= b && a <= c)
		return (a + 1);
	if (b <= a && b <= c)
		return (b + 1);
	if (c <= a && c <= b)
		return (c + 1);
	return (0);
}

void	map_error(void)
{
	write(2, "map error\n", 11);
	exit(-1);
}

void	bsq(char *argv)
{
	int		i;
	int		j;
	int		k;
	int		**arr;
	int		ni;
	int		nj;
	char	full;
	char	empty;
	char	chres;
	int		zi;
	int		zj;
	char	o;
	int		p;

	i = openfile(argv);
	j = countcolumns(argv);
	k = 0;
	o = '\0';
	p = syminline(i);
	arr = (int**)malloc(i * sizeof(int*));
	while (k < i)
	{
		arr[k] = (int*)malloc(j * sizeof(int));
		k++;
	}
	empty = firstline(argv, p, 1, i);
	full = firstline(argv, p, 2, i);
	chres = firstline(argv, p, 3, i);
	k = i * j;
	arr = arrofsymbs(argv, k, arr);
	k = 0;
	ni = 0;
	while (ni < i)
	{
		nj = 0;
		while (nj < j)
		{
			if ((char)arr[ni][nj] != full && (char)arr[ni][nj] != empty)
				map_error();
			if (ni == 0 || nj == 0 || arr[ni][nj] == full)
			{
				if (arr[ni][nj] == empty)
					arr[ni][nj] = 1;
				if (arr[ni][nj] == full)
					arr[ni][nj] = 0;
			}
			if (arr[ni][nj] != 0 && ni != 0 && nj != 0)
			{
				arr[ni][nj] = min(arr[ni][nj - 1], arr[ni - 1][nj],
				arr[ni - 1][nj - 1]);
			}
			if (arr[ni][nj] > k && arr[ni][nj] != 0)
			{
				k = arr[ni][nj];
				zi = ni;
				zj = nj;
			}
			nj++;
		}
		ni++;
	}
	ni = 0;
	while (ni < i)
	{
		nj = 0;
		while (nj < j)
		{
			if (arr[ni][nj] == 0)
				write(1, &full, 1);
			else if (nj <= zj && nj >= (zj - k + 1) &&
			ni <= zi && ni >= (zi - k + 1))
				write(1, &chres, 1);
			else if (arr[ni][nj] != 0 && arr[ni][nj] != chres)
				write(1, &empty, 1);
			nj++;
		}
		ni++;
		write(1, "\n", 1);
	}
	free(arr);
}

void	ter(void)
{
	int		temp;
	int		fd1;
	char	*filename;

	filename = "moy";
	fd1 = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (fd1 == -1)
	{
		write(2, "NOT OPENED\n", 11);
		return ;
	}
	while (read(0, &temp, 1) > 0)
	{
		write(fd1, &temp, 1);
	}
	write(fd1, "\0", 1);
	close(fd1);
	bsq(filename);
}

int		main(int argc, char **argv)
{
	int g;

	g = 1;
	if (argc == 1)
		ter();
	if (argc >= 2)
	{
		while (argv[g])
		{
			bsq(argv[g]);
			if (argc > 2)
			{
				write(1, "\n", 1);
				argc--;
			}
			g++;
		}
	}
	return (0);
}

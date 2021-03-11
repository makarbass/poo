/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:15:37 by bpatrici          #+#    #+#             */
/*   Updated: 2021/03/01 20:49:22 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str);

int main(int argc, char **argv)
{
	int fd;
	int ret;
	char buf[4097];

	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (1);
	ret = read(fd, buf, 4097);
	buf[ret] = '\0';
	if (ret == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (0);
	}
	ft_putstr(buf);
	if (close(fd) == -1)
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 21:06:47 by bpatrici          #+#    #+#             */
/*   Updated: 2021/03/10 21:07:06 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

int		openfile(char *argv);
int		countcolumns(char *argv);
int		syminline(int i);
char	firstline(char *argv, int p, int q, int i);
int		**arrofsymbs(char *argv, int k, int **arr);
void	map_error(void);

#endif

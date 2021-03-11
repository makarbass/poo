/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 12:25:40 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/27 16:48:27 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_BOOLEAN_H
# define __FT_BOOLEAN_H

# include <unistd.h>
# define EVEN(n) (n)%2 == 0
# define ODD_MSG "I have an odd number of arguments\n"
# define EVEN_MSG "I have an even number of arguments\n"
# define SUCCESS 0
# define TRUE 1
# define FALSE 0

typedef int	t_bool;

#endif

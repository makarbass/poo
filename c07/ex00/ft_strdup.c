/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 01:28:12 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/26 20:45:48 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*t;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	t = (char*)malloc(sizeof(*src) * (i + 1));
	i = 0;
	if (t == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		t[i] = src[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}

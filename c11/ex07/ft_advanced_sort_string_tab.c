/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:03:23 by bpatrici          #+#    #+#             */
/*   Updated: 2021/03/03 20:48:19 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char*, char*))
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	while (tab[i] != NULL)
	{
		j = i;
		while (tab[j] != NULL)
		{
			if (cmp(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

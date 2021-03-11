/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 09:38:16 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/28 09:57:51 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

char	*zap(int q, int i, char *str)
{
	char	*okey;
	int		k;
	int		j;

	k = 0;
	okey = (char*)malloc(i - q);
	if (q == 0 && i == 0)
		okey[k] = '0';
	while (k < i - q)
	{
		okey[k] = str[q + k];
		k++;
	}
	return (okey);
}

int		**ft_mass(void)
{
	int **sh;
	int *mass;

	mass = (int*)malloc(4 * 4);
	mass[0] = 0;
	mass[1] = 0;
	mass[2] = 0;
	mass[3] = 0;
	sh = &mass;
	return (sh);
}

char	**ft_split(char *str, char *charset)
{
	int		*mas;
	char	**arr;

	mas = *ft_mass();
	arr = (char**)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[a[0]] != '\0')
	{
		a[1] = 0;
		while (charset[a[1]] != '\0')
		{
			if (str[a[0]] == charset[a[1]])
			{
				arr[a[2]] = zap(a[3], a[0], str);
				a[3] = a[0] + 1;
				a[2]++;
				break ;
			}
			a[t]++;
		}
		a[0]++;
	}
	arr[a[2]] = zap(a[3], a[0], str);
	a[2]++;
	arr[a[2]] = zap(0, 0, str);
	return (arr);
}

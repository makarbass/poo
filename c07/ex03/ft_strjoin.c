/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 06:07:41 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/28 09:53:42 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_size(char **strs, int size)
{
	int		j;
	int		i;
	int		count;
	int		*pcount;
	char	*pool21;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		pool21 = strs[i];
		while (pool21[j])
		{
			count++;
			j++;
		}
		i++;
	}
	pcount = &count;
	return (pcount);
}

int		**ft_mass(void)
{
	int	**sh;
	int	*mass;

	mass = (int*)malloc(3 * 4);
	mass[0] = 0;
	mass[1] = 0;
	mass[2] = 0;
	sh = &mass;
	return (sh);
}

char	*ft_retstroka(char **strs, char *sep, int size, int count)
{
	int		*mas;
	char	*pool21;
	char	*stroka;

	mas = *ft_mass();
	stroka = (char*)malloc(sizeof(char) * (count + size));
	while (mas[0] < size)
	{
		mas[1] = 0;
		pool21 = strs[mas[0]];
		while (pool21[mas[1]])
		{
			stroka[mas[2]] = pool21[mas[1]];
			mas[2] = mas[2] + 1;
			mas[1] = mas[1] + 1;
		}
		if (mas[2] < count)
		{
			stroka[mas[2]] = *sep;
			mas[2] = mas[2] + 1;
		}
		mas[0] = mas[0] + 1;
	}
	stroka[mas[2]] = '\0';
	return (stroka);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count;
	char	*strokafin;

	if (size == 0)
	{
		strokafin = (char*)malloc(sizeof(char) * 1);
		strokafin[0] = "\0";
	}
	else if (size < 0)
		return (0);
	else
	{
		count = *ft_size(strs, size);
		strokafin = ft_retstroka(strs, sep, size, count);
	}
	return (strokafin);
}

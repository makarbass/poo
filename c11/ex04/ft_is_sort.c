/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 20:00:30 by bpatrici          #+#    #+#             */
/*   Updated: 2021/03/02 20:06:43 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	low;
	int	high;

	i = 0;
	low = 0;
	high = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			low++;
		if (f(tab[i], tab[i + 1]) > 0)
			high++;
		i++;
	}
	if (high == 0 || low == 0)
		return (1);
	return (0);
}

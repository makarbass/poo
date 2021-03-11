/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:32:16 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/24 06:41:07 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (2);
	while (nb % i != 0)
	{
		i++;
	}
	if (i == nb)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

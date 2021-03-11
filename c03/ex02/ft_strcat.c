/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:50:13 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/21 20:32:03 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		count++;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	src[count + i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:10:32 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/21 20:20:22 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (dest[i] != '\0')
	{
		count++;
		i++;
	}
	i = 0;
	while (i < nb)
	{
		dest[count + i] = src[i];
		i++;
	}
	return (dest);
}

int main(void)
{
	char s1[20] = "sad";
    char s2[] = "dadddddd";
	printf("%s\n",ft_strncat(s1,s2,3));	
}

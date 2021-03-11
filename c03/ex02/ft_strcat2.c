/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:50:13 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/21 20:04:58 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
		dest[count+i] = src[i];
		i++;
	}
	return(dest);
}

int main(void)
{
	char s1[20] = "sad";
	char s2[] = "bad";
	printf("%s\n",ft_strcat(s1,s2));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 16:01:44 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/21 16:22:33 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == s2[i])
			i++;
	}
	return(0);
}

int main()
{
	char s1[] = "abcdd";
	char s2[] = "abcd";
	printf("%d\n", ft_strcmp(s1,s2));
	printf("%d\n", strcmp(s1,s2));
}

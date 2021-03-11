/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 19:52:54 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/20 20:33:53 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i]<123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char str[]="hj64763gkjyfk";
	ft_strupcase(str);	
	printf("%s\n", str);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 12:56:12 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/22 12:56:41 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main()
{
	char *s0 = "1234567890";
	char *s1 = "\t\n\t";
	char *s2 = "";
	char *s3 = " ";
	char *s4 = "12\0 34";

	printf("strings:\nstr0: \'1234567890\'\nstr1: \'\\t\\n\\t\'\nstr2: \'\'\nstr3: \' \'\nstr4: \'12\\0 34\'\n\n");
	printf("real function\n__________\n");

	int resf[5] = {
		strlen(s0),
		strlen(s1),
		strlen(s2),
		strlen(s3),
		strlen(s4)
	};
	for( int i = 0; i < 5; i++)
		printf("str%d: %d\n", i, resf[i]);

	printf("\nyour function\n__________\n");
	int resmf[5] = {
		ft_strlen(s0),
		ft_strlen(s1),
		ft_strlen(s2),
		ft_strlen(s3),
		ft_strlen(s4)
	};
	for( int i = 0; i < 5; i++)
		printf("str%d: %d \t\tres:%d\n", i, resmf[i], resmf[i] == resf[i]);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:47:32 by bpatrici          #+#    #+#             */
/*   Updated: 2021/03/02 15:53:58 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(int argc, char ** argv)
{
	int a;
	int b;

	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	printf("ARGV0 %s\n", argv[0]);
	printf("ARGV1 %s\n", argv[1]);
	printf("ARGV2 %s\n", argv[2]);
	printf("ARGV3 %s\n", argv[3]);
	if (argv[2][0] == '+')
		printf("SUMM %d\n", a+b);
	
	else if (argv[2][0] == '-')
		printf("RAZN %d\n", a-b);
	
	else if (argv[2][0] == 'a')
	{
		printf("ARGV %c", argv[2][0]);
		printf("UMN %d\n", a*b);
	}
	
	else if (argv[2][0] == '/')
	{	
		if (b == 0)
		{
			printf("Stop : division by zero\n");
			return (0);
		}
		else 
			printf("DEL %d\n", a / b);
	}
	else if (argv[2][0] == '%')
	{
		if (b == 0)
		{
			printf("Stop : modulo by zero\n");
              return (0);
		}
		else
		   printf("OST %d\n", a % b);	
	}
	return (0);
}

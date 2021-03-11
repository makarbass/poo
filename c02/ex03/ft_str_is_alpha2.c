/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:57:50 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/20 18:26:10 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;
	char ret;

	i = 0;
	if (str[0] == '\0') 
	{
		ret = '1';
	}
	else{
		while (str[i] != '\0')
		{
			if (str[i] > 47 && str[i] < 58)
			{
				ret = '1';
				i++;
			}
			else
			{
				ret = '0';
				break;
			}
		}
	}
	ft_putchar(ret);	
}

int main(void)
{
	ft_putstr("aabcdFDSFDSSACFgds364g4w");
	ft_putstr("");
	ft_putstr("fds%53");
	ft_putstr("432");
	ft_putstr("4");
	return (0);
}

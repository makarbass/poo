/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 06:07:41 by bpatrici          #+#    #+#             */
/*   Updated: 2021/02/25 07:40:58 by bpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_size(char *pool21, char **strs, int size)
{
		 int j;
		 int i;
		 int count;
		int *pcount;

		 i = 0; 
		 count = 0;
		 while (i < size)
		 {
         	j = 0;
			pool21 = strs[i];
         	while (pool21[j])
         	{   
            	 count++;
             	 j++;
	//			 printf("COUNT %d \n", count); 
         	}
         	i++;
		 }
		 pcount = &count;
	return (pcount);
}
char *ft_strjoin(int size, char **strs, char *sep)
{
	int count;
	int i;
	char *pool21;
	int j;
	char *stroka;
	int k;
		
//	count = 0;
	i = 0;
	k = 0;
	if (size == 0)
		return ("\0");
	count = *ft_size(pool21, strs, size);
	printf("%d\n", count);
//	printf("%d\n",*ft_size(pool21,strs,size));
/*	while (i < size)
	{
		j = 0;
		pool21 = strs[i];
		while (pool21[j])
		{
			count++;
			j++;
		}
		i++;
	}*/
	stroka = (char*)malloc(sizeof(char) * (count + size));
	i = 0;
	while (i < size)
	{
		j = 0;
		pool21 = strs[i];
		while (pool21[j])
		{
			stroka[k] = pool21[j];
			k++;
			j++;
		}
		if (k < count)
			{
			stroka[k] = *sep;
			k++;
			}
		i++;	
	}
	stroka[k] = '\0';	
	return(stroka);
//	return("SUCCESS");
}

int main()
{
	char sep;
	int size;

	char* str[] = {"AdfsB", "CgdfshD"};
	char** str2 = str;
	sep = '$';
	size = 2;
	printf("%s\n", ft_strjoin(size, str2, &sep));
	return (0);
}

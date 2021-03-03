#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char *a, char *b)
{
	char *temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strlen(char **str)
{
	int i;

	i = 0;
	while(*str[i])
		i++;
	return(i);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	length;
	
	i = 0;
	length = ft_srtlen(tab);
	while (i < length-1)
	{
		if (strcmp(tab[i],tab[i+1]) <= 0)
			i++;
		if (strcmp(tab[i],tab[i+1]) > 0)
		{
			ft_swap(tab[i],tab[i+1]);
			i--;
		}
	}
	printf("%s\n",tab[0]);
}

#include <stdio.h>

int	ft_atoi(char *str);

int signs(char *argv)
{
	if (argv[0] == '+')
		return (1);
	if (argv[0] == '-')
		return (2);
	if (argv[0] == '*')
		return (3);
	if (argv[0] == '/')
		return (4);
	if (argv[0] == '%')
		return (5);
	return (0);
}

int result(int a, int b, int si)
{
	if (si == 1)
		return(a + b);
	if (si == 2)
		return(a - b);
	if (si == 3)
		return(a * b);
	if (si == 4)
	{
		if (b == 0)
		{
			printf("del 0");
			return (0);
		}
		return(a / b);
	}
	if (si == 5)
	{
		if (b == 0)
		{
			printf("mod 0");
			return (0);
		}
		return (a % b);
	}
	return(0);
}


int main(int argc, char **argv)
{
	int si;
	int a;
	int b;

	if (argc != 4)
		return(0);
	si = signs(argv[2]);
	printf("%d", si);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[2]);
	printf("%d", result(a,b,si));
	return (0);
}

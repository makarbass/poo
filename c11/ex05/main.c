#include <stdio.h>

int	main(int argc, char **argv)
{
	int arr[5][5];
	if (argc != 4)
		return (0);
	if (argv[2][0] == '+')
		arr[0][0] = 1;
	printf("%d ",arr[0][0]);
return(0);	
}
				

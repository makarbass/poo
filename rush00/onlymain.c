#include <unistd.h>

void	rush(int a, int b)
{
	int x;
	int y;

	x = a;
	y = b;

	while (y > 0)
	{
		if (y == b)
		{
			while (x > 0)
			{
				if (x == a || x == 1)
				{
					write (1, "A", 1);
				}
				else
				{
					write (1, "B", 1);
				}
				x--;
			}
			x = a;
			write (1, "\n", 1);
		}

		else if (y == 1)
		{
			while (x > 0)
			{
				if (x == a || x == 1)
				{
					write (1, "C", 1);
				}
				else
				{
					write (1, "B", 1);
				}
				x--;
			}
			x = a;
			write(1, "\n", 1);
		}

		else
		{
			while (x > 0)
			{
				if (x == a || x == 1)
				{
					write (1, "B", 1);
				}
				else
				{
					write (1, " ", 1);
				}
				x--;
			}
			x = a;
			write (1, "\n", 1);
		}
		y--;
	}
}

int		main()
{
	rush(5,3);
	return (0);
}

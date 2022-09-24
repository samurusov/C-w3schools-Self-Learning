#include <stdio.h>

int	main(void)
{
	int	i;

	for (i = 3; i < 10; i++)
	{
		if (i == 4)
		{
			continue ;
		}
		printf("%d\n", i);
	}
}

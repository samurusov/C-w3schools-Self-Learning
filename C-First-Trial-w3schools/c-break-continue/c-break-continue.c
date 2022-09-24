#include <stdio.h>

int	main(void)
{
	int	i;

	for (i = 0; i < 10; i++)
	{
		if (i == 7)
		{
			break ;
		}
		printf("%d\n", i);
	}
}

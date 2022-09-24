#include <stdio.h>

int	main(void)
{
	int	i;

	i = 3;
	while (i < 10)
	{
		i++;
		if (i == 6)
		{
			continue ;
		}
		printf("%d\n", i);;
	}
	return (0);
}

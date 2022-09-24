#include <stdio.h>

int	main(void)
{
	int	time;

	time = 19;
	if (time < 10)
	{
		printf("Good morning.\n");
	}
	else if (time < 20)
	{
		printf("Good day.\n");
	}
	else
	{
		printf("Good evening.\n");
	}
	return (0);
}

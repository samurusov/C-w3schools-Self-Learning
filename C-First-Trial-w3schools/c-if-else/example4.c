#include <stdio.h>

int	main(void)
{
	int	mynum;

	mynum = -1;
	if (mynum > 0)
	{
		printf("It's a positive number.\n");
	}
	else if (mynum < 0)
	{
		printf("It's a negative number.\n");
	}
	else
	{
		printf("It's zero.\n");
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int	day;

	day = 3;
	switch (day)
	{
		case 6:
			printf("Today is Saturday\n");
			break;
		case 7:
			printf("Today is Sunday\n");
			break;
		default:
			printf("Looking forward to the Weekend\n");
	}
	return(0);
}

#include <stdio.h>

int	main(void)
{
	char	firstname[30];

	printf("Enter your first name: \n");
	scanf("%s", firstname);
	printf("Hello %s\n.", firstname);
}

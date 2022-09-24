#include <stdio.h>

void	myfunction(char name[], int age)
{
	printf("Hello %s. You are %d years old.\n", name, age);
}

int	main(void)
{
	myfunction("Katlyn", 4);
	myfunction("Ahmet", 14);
	myfunction("Sevla", 21);
	return (0);
}

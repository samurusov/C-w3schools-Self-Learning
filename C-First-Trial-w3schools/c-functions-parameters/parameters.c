#include <stdio.h>

void	myfunction(char name[])
{
	printf("Hello %s\n", name);
}

int	main(void)
{
	myfunction("Ahmet");
	myfunction("Mehmet");
	myfunction("Zeliha");
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int	myage = 43;
	int*	ptr = &myage;

	printf("%p\n", ptr);
	printf("%d\n", *ptr);
}

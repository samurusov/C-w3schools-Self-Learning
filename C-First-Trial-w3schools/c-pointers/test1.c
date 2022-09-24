#include <stdio.h>

int	main(void)
{
	int	myage = 26;
	int*	ptr = &myage;

	printf("%d\n", myage);
	printf("%p\n", &myage);
	printf("%p\n", ptr);
}

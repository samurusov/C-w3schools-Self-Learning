#include <stdio.h>

int	myfunction(int x, int y)
{
return x * y;
}

int	main(void)
{
	printf("Result: %d\n", myfunction(10, -12));
	return 0;
}

//int x ve y yi toplar ve return ile sonucu verir

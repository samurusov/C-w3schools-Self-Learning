#include <stdio.h>

int	main(void)
{
	int	myint;
	float	myfloat;
	double	mydouble;
	char	mychar;

	printf("%lu\n", sizeof(myint));
	printf("%lu\n", sizeof(myfloat));
	printf("%lu\n", sizeof(mydouble));
	printf("%lu\n", sizeof(mychar));
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};
	printf("%s\n", greetings);
	// This is known as the "null termininating character", and must be included when creating strings using this method. It tells C that this is the end of the string.
}

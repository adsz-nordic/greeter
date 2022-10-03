#include <stdio.h>
#include "greeter.h"

void greetings(void)
{
#ifdef CONFIG_GREETER_VERBOSE
	printf("Greetings my friend, it is very nice to see you!\n");
#else /* CONFIG_GREETER_VERBOSE */
	printf("Greetings!\n");
#endif /* CONFIG_GREETER_VERBOSE */
}

void cursings(void)
{
	printf("Get lost!\n");
}

#include <stdio.h>
#include "src/cstack.h"

int main()
{
	cstack_push(12);
	cstack_push(42);
	cstack_push(13);
	cstack_push(30);
	cstack_push(65);

	char t = 0;

	t = cstack_pop();
	printf("%d\n", t);
	t = cstack_pop();
	printf("%d\n", t);
	t = cstack_pop();
	printf("%d\n", t);
	t = cstack_pop();
	printf("%d\n", t);
	t = cstack_pop();
	printf("%d\n", t);
	t = cstack_pop();
	printf("%d\n", t);

	return 0;
}
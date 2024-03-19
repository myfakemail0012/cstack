#include <stdio.h>
#include <stdlib.h>

#include "cstack.h"

typedef struct cstack_s
{
	struct cstack_s *prev;
	char data;
} cstack_t;

static cstack_t *cstack;
static size_t type_size;

void cstack_push(char data)
{
	cstack_t *new = malloc(sizeof(cstack_t));
	new->data = data;
	new->prev = cstack;
	cstack = new;
}

char cstack_pop()
{
	if (cstack == NULL)
	{
		fprintf(stderr, "\033[0;31mFATAL ERROR\033[0m: Stack is empty.\n");
		exit(-1);
	}
	char value = cstack->data;
	cstack_t *current = cstack;
	cstack = cstack->prev;
	free(current);
	return value;
}

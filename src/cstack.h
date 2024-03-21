#ifndef CSTACK_H
#define CSTACK_H

#include <stdio.h>
#include <stdlib.h>

// clang-format off
#define CSTACK_INIT(type) \
typedef struct cstack_s\
{\
    struct cstack_s *prev;\
    type data;\
} cstack_t;\
\
static cstack_t *cstack;\
\
void cstack_push(type data)\
{\
    cstack_t *new = malloc(sizeof(cstack_t));\
    new->data = data;\
    new->prev = cstack;\
    cstack = new;\
}\
\
type cstack_pop()\
{\
    if (cstack == NULL)\
    {\
        fprintf(stderr, "\033[0;31mFATAL ERROR\033[0m: Stack is empty.\n");\
        exit(-1);\
    }\
    type value = cstack->data;\
    cstack_t *current = cstack;\
    cstack = cstack->prev;\
    free(current);\
    return value;\
}
// clang-format on

#endif // CSTACK_H
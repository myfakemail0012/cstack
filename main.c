#include <stdio.h>
#include <limits.h>
#include "src/cstack.h"

CSTACK_INIT(int);

int main()
{
        cstack_push(65535);
        cstack_push(42);
        cstack_push(13);
        cstack_push(30);
        cstack_push(INT_MAX);

        int t = 0;

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

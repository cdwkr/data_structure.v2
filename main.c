#include <stdio.h>
#include "IntQueue.h"

int main(void)
{
    IntQueue q;
    if (Initialize(&q, 5) != 0) {
        fprintf(stderr, "Initialize failed\n");
        return 1;
    }

    Enque(&q, 10);
    Enque(&q, 20);
    Enque(&q, 30);

    Print(&q);

    int x;
    if (Deque(&q, &x) == 0)
        printf("Deque: %d\n", x);

    Print(&q);

    Terminate(&q);
    return 0;
}
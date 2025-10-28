#include <stdio.h>

void mult(int n)
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    printf("\n");
}

int main()
{
    mult(5);
    mult(6);
    mult(7);

    return 0;
}


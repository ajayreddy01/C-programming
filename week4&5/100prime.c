#include <stdio.h>

int main()
{
    int i, j, count = 0;

    printf("The value between 1 to 100\n");

    for (i = 2; i <= 100; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            printf(" %d ", i);
        count = 0;
    }
}
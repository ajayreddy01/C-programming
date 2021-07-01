#include <stdio.h>
#include <math.h>

int main()
{
    printf("\tEQUATION SERIES : x - X^3/3! + X^5/5!");
    printf("\n\tENTER VALUE OF X : ");
    int x, power, fact = 1,i;
    float sum = 0;
    scanf("%d", &x);
    for (power = 3; power <= 5; power = power+2)
    {
        fact = 1;
        for (i = 1; i <= power; i++)
        {
            fact = fact * i;
        }
        sum = sum+(pow(x,power) / fact);
    }
    float s = x - sum;
    printf("  %f",s);
}
#include <stdio.h>
#include <math.h>

int main()
{
    printf("\tEQUATION SERIES : 1+ X^1/1! + X^2/2! + X^3/3!");
    printf("\n\tENTER VALUE OF X : ");
    int x, power, fact = 1,i,sum = 1;
    scanf("%d", &x);
    for (power = 1; power <= 3; power++)
    {
        fact = 1;
        for (i = 1; i <= power; i++)
        {
            fact = fact * i;
        }
        sum = sum+(pow(x,power)/fact);
    }
    printf("%d",sum);
}
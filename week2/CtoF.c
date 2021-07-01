#include <stdio.h>
int main(){
    float centi,farhan;
    printf("Enter The celcius:");
    scanf("%f",&centi);
    farhan = (centi*9/5)+32;
    printf("The Given celcius In Fahrenheit is :");
    printf("%f",farhan);
    return 0;
}
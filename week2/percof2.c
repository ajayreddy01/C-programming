#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter the First digit :");
    scanf("%f",&a);
    printf("\n Enter The Second Digit :");
    scanf("%f",&b);
    c = (a/b)*100;
    printf("%.2f Is %.2f  Percentage of %.2f,",a,c,b);
    return 0;
}
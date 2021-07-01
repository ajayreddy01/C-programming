#include <stdio.h>

int main(){
    printf("Enter Two Digits :");
    float a,b;
    scanf("%f%f",&a,&b);
    if(a==b){printf("Equal");}
    if(a<b){printf("Up");}
    if(a>b){printf("Down");}
    return 0;
}
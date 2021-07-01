#include <stdio.h>
int main(){
    printf("Enter the Digit : \n");
    float digit;
    scanf("%f",&digit);
    if( digit > 0 ){ printf("Positive");}
    else if( digit < 0 ){ printf("negative");}
    else{printf("zero");}
    return 0;
}
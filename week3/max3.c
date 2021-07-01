#include <stdio.h>
int main(){
    float a,b,c,max;
    printf("Enter Three Numbers : \n");
    scanf("%f%f%f",&a,&b,&c);
    if((a>=b) && (a>=c) ){
        max = a;
    }if((b>=a) && (b>=c)){
        max = b;
    }if((c>=a)&&(c>=10)){
        max = c;
    }if((a==b) ||(a==c) || (b==c)){printf("Two Digits are Equal \n");}
    printf("%.1f Is the greatest Number amoung All three",max);
    return 0;
}
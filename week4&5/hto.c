#include <stdio.h> 
int main() 
{ 
	int n,h,t,u;
    printf("Enter The Three Digit number :"); 
    scanf("%d",&n);
    u=n%10; 
    t=(n/10)%10; 
    h=(n/100)%10;
	printf("Hundreds = %d , Tens = %d , Units = %d\n",h,t,u); 
 
	return 0; 
} 
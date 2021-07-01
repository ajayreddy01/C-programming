#include <stdio.h>
int main(){
    float area,radious;
    printf("Enter The Radious Of Circle :");
    scanf("%f",&radious);
    area = 3.14*radious*radious;
    printf("\n Area of Circle is:");
    printf("%f",area);
    return 0;
}
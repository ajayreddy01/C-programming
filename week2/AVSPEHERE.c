#include <stdio.h>
int main(){
    float area,radious,volume;
    printf("Enter The Radious Of Sphere :");
    scanf("%f",&radious);
    area = 4*3.14*radious*radious;
    printf("\n Area of Sphere is:");
    printf("%f",area);
    volume = 4/3*3.14*radious*radious*radious;
    printf("\n Volume of Sphere is:");
    printf("%f",volume);
    return 0;
}
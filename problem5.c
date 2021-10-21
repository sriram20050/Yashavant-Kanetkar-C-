#include<stdio.h>

int main(void)
{
    int length,breadth;
    float radius;

    printf("Enter Length of the Rectangle(in cm): ");
    scanf("%i",&length);

    printf("Enter Breadth of the Rectangle(in cm): ");
    scanf("%i",&breadth);

    printf("Enter Radius of the Circle(in cm): ");
    scanf("%f",&radius);

    printf("The Area of the Rectangle is %i\n",length*breadth);
    printf("The Perimeter of the Rectangle is %i\n",(2*length)+(2*breadth));
    printf("The Area of the Circle is %f\n",(22/7)*radius*radius);

}
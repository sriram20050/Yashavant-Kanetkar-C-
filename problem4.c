#include<stdio.h>

int main(void)
{
    float temp;

    printf("Tempararature of City(In Farenheit): ");
    scanf("%f",&temp);

    printf("The temparature of the City(In Celsius): %f\n",(temp - 32) * 5/9);

    //(32°F − 32) × 5/9 = 0°C
}
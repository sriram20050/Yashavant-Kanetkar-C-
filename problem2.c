#include<stdio.h>

int main(void)
{
    int distance = 0;
    int feet,meters,inches,cm;

    printf("Enter the distance between two cities(in km): ");
    scanf("%i",&distance);

    meters = distance * 1000;
    feet = distance * 3281;
    inches = distance * 39370;
    cm = distance * 100000;

    printf("The distance in meters is: %i\n",meters);
    printf("The distance in feet is: %i\n",feet);
    printf("The distance in inches is: %i\n",inches);
    printf("The distance in centimeters is: %i\n",cm);

}
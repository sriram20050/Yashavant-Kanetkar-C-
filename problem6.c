#include<stdio.h>

int main(void)
{
    int x,y;
    x = 1189;
    y = 841;
    int A0 = x;
    int A1 = (x * 1/2);
    printf("The paper size of A1 is: %i * %i\n",A1,y);
    int A2 = ((A1 * 1/2));
    printf("The paper size of A2 is: %i * %i\n",A2,y);
    int A3 = ((A2 * 1/2));
    printf("The paper size of A3 is: %i * %i\n",A3,y);
    int A4 = ((A3 * 1/2));
    printf("The paper size of A4 is: %i * %i\n",A4,y);
    int A5 = ((A4 * 1/2));
    printf("The paper size of A5 is: %i * %i\n",A5,y);
    int A6 = ((A5 * 1/2));
    printf("The paper size of A6 is: %i * %i\n",A6,y);
    int A7 = ((A6 * 1/2));
    printf("The paper size of A7 is: %i * %i\n",A7,y);
    int A8 = ((A7 * 1/2));
    printf("The paper size of A8 is: %i * %i\n",A8,y);
}
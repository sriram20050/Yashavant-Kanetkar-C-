#include<stdio.h>

int main(void)
{
    float salary;
    float d_allow;
    float r_allow;
    float g_allow;

    printf("Enter Salary: ");
    scanf("%f",&salary);

    d_allow = salary * 40/100;
    printf("Dearness allowance: %f\n",d_allow);
    r_allow = salary * 20/100;
    printf("Rent allowance: %f\n",r_allow);

    g_allow = (salary - r_allow) - g_allow;
    printf("Ramesh's gross salary is: %f\n",g_allow);


}

#include<stdio.h>

int main(void)
{
    float subject1,subject2,subject3,subject4,subject5;
    int max_marks = 100;
    float agg_marks;

    printf("Enter Marks of Subject 1: ");
    scanf("%f",&subject1);
    agg_marks = (float)subject1 / (float)max_marks;
    printf("The Aggregate Marks for Subject 1 is: %f\n",agg_marks);

    printf("Enter Marks of Subject 2: ");
    scanf("%f",&subject2);
    agg_marks = (float)subject2 / (float)max_marks;
    printf("The Aggregate Marks for Subject 2 is: %f\n",agg_marks);

    printf("Enter Marks of Subject 3: ");
    scanf("%f",&subject3);
    agg_marks = (float)subject3 / (float)max_marks;
    printf("The Aggregate Marks for Subject 3 is: %f\n",agg_marks);

    printf("Enter Marks of Subject 4: ");
    scanf("%f",&subject4);
    agg_marks = (float)subject4 / (float)max_marks;
    printf("The Aggregate Marks for Subject 4 is: %f\n",agg_marks);

    printf("Enter Marks of Subject 5: ");
    scanf("%f",&subject5);
    agg_marks = (float)subject5 / (float)max_marks;
    printf("The Aggregate Marks for Subject 5 is: %f\n",agg_marks);

    printf("The Total Mark is: %f\n",(subject1+subject2+subject3+subject4+subject5)/500 * 100);
}
#include<stdio.h>
void main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Invalid Input");
    }
    else if(marks<40)
    {
        printf("Result is: Grade F");
    }
    else if(marks>=40 && marks<=54)
    {
        printf("Result is: Grade D");
    }
    else if(marks>=55 && marks<=69)
    {
        printf("Result is: Grade C");
    }
    else if(marks>=70 && marks<=84)
    {
        printf("Result is: Grade B");
    }
    else if(marks>=85 && marks<=100)
    {
        printf("Result is: Grade A");
    }
}

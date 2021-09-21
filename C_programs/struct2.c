/* Program to check palindrome of a string
    Author  : Fahad P N
    Roll no.: 330
    date    : 10/09/2021
    Experiment 07
    Problem 02
*/


#include<stdio.h>

typedef struct Employee
{
    char name[20];
    int id;
    float salary;
} Employee;

int main()
{
    Employee emp[20];
    int n;

    printf("Enter the number of employees: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {    
        printf(" Enter name of employee %d: ",i+1);
        gets(emp[i].name);
        printf(" Enter id no. of employee %d: ",i+1);
        scanf("%d",&emp[i].id);
        printf(" Enter salary of employee %d: ",i+1);
        scanf("%f",&emp[i].salary);
    }
    for(int i=0;i<n;i++)
    {
        printf("\n name of employee %d: %s",i+1,emp[i].name);
        printf("\n id no. of employee %d: %d",i+1,emp[i].id);
        printf("\n salary of employee %d: %f",i+1,emp[i].salary);
    }

    return 0;
}
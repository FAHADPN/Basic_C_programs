/* Program to find sum and avarage of array elements
    Author  : Fahad P N
    Roll no.: 330
    date    : 03/08/2021
    Experiment 00 
*/

#include <stdio.h>

int main()
{
    int i, a[20],n;
    float average,sum =0;
    printf("How many numbers do you need in array? :");
    scanf("%d",&n);
    printf("Enter the numbers: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    average = sum/n;
    printf("The sum is %f and average is %f", sum,average);
}
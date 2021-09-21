/* Program to find an element in array using linear search method
    Author  : Fahad P N
    Roll no.: 330
    date    : 03/08/2021
    Experiment 00 
*/


#include <stdio.h>

int main()
{
    int n,a[20],found = 0,i, search_element;
    printf("How many numbers do you need array? : ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search : ");
    scanf("%d",&search_element);
    for(i=0;i<n;)
    {
        if (search_element == a[i])
        {
            found = 1;
            break;
        }
        else
            i++;
    }
    if (found==1)
    {
        printf("The number %d is in index %d ", search_element,i+1);

    }
    else 
        printf("Number not found");
    return 0;
}
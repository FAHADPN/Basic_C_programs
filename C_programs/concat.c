/* Program to concatenate a string without using library functions
    Author  : Fahad P N
    Roll no.: 330
    date    : 11/08/2021
    Experiment 05
*/

#include<stdio.h>

int main()
{
    char str1[20], str2[20];
    int i=0,j=0;
    printf("Enter to strings to be concatenated: ");
    scanf("%s",str1);
    scanf("\n %s",str2);
    while(str1[j]!='\0')
    {
        j++;
    }
    while(str2[i]!='\0')
    {
        str1[j]=str2[i];
        j++;
        i++;
    }
    printf("' %s ' is the concatenated string", str1);
    return 0;
}
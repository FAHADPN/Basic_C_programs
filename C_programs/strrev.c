/* Program to check palindrome of a word
    Author  : Fahad P N
    Roll no.: 330
    date    : 02/09/2021
    Experiment 06
    Problem 2
*/

#include<stdio.h>
#include<string.h>

void reverse(char s[20]);
int main()
{
    char s[20];
    printf("Enter the word: ");
    gets(s);
    reverse(s);
    return 0;
}
void reverse(char s[20])
{
    char rev[20];
    strcpy(rev,s);
    for(int i=0,j=strlen(s)-1;i<strlen(s);i++,j--)
    {
        rev[j]=s[i];
    }
    printf(" Reversed string : %s ", rev);
}
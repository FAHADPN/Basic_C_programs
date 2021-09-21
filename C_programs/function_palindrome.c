/* Program to check palindrome of a word

    Author  : Fahad P N
    Roll no.: 330
    date    : 02/09/2021
    Experiment 06
    Problem 2
*/

#include<stdio.h>
#include<string.h>

void palindrome(char s[20]);
int main()
{
    char s[20];
    printf("Enter the word to check: ");
    gets(s);
    palindrome(s);
    return 0;
}
void palindrome(char s[20])
{
    char n[20];
    strcpy(n,s);
    strrev(n);
    if(strcmp(n,s)==0)
    {
        printf("%s is a palindrome", s);
    }
    else
    {
        printf("%s is not a palindrome",s);
    }
}
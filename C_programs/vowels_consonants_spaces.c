/* Program to find the number of vowels, consonants and spaces in a string
    Author  : Fahad P N
    Roll no.: 330
    date    : 11/08/2021
    Experiment 05
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20];
    int vowel=0,consonant=0,spaces=0;
    printf("Enter the string you want to check: ");
    gets(str1);
    for(int i=0;i<strlen(str1);i++)
    {
        if( str1[i]=='a'||  str1[i]=='e'||   str1[i]=='i'||str1[i]=='o'
        ||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'
        || str1[i]=='U')
        {
            vowel++;
        }
        else if(str1[i]==' ')
        {
            spaces++;
        }
        else if(str1[i]!='$') // Since the question spacifically asks for a string with $ symbol
        {
            consonant++;
        }
    
    }
    printf("There are %d vowels, %d consonants and %d spaces",vowel,consonant,spaces);
    return 0;
}
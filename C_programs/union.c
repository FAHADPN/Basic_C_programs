/* Program to check palindrome of a string
    Author  : Fahad P N
    Roll no.: 330
    date    : 10/09/2021
    Experiment 07
    Problem 03
*/
#include<stdio.h>
#define C_SIZE 20

union address
{
    char name[C_SIZE],house_name[C_SIZE],city_name[C_SIZE],state[C_SIZE];
    int pincode;
};

int main()
{
    union address p1;
    printf("Enter the name of the person: ");
    fgets(p1.name,C_SIZE,stdin);
    printf("Enter the House name: ");
    fgets(p1.house_name,C_SIZE,stdin);
    printf("Enter the city name: ");
    fgets(p1.city_name,C_SIZE,stdin);
    printf("Enter the state: ");
    fgets(p1.state,C_SIZE,stdin);
    printf("Enter the pincode: ");
    scanf("%d",&p1.pincode);

    printf(" %s, %s, %s, %s, %d", p1.name,p1.house_name,p1.city_name,p1.state,p1.pincode);
    return 0;
}
/* Program to check palindrome of a string
    Author  : Fahad P N
    Roll no.: 330
    date    : 10/09/2021
    Experiment 07
    Problem 01
*/
#include<stdio.h>
#include<math.h>

struct points
{
    int x,y;
};

int main()
{
    struct points p1,p2;
    float dist;
    printf("Enter x and y of point 1: ");
    scanf("%d",&p1.x);
    scanf("%d",&p1.y);
    printf("Enter x and y of point 2: ");
    scanf("%d",&p2.x);
    scanf("%d",&p2.y);
    dist = sqrt(pow(p1.x-p2.x,2) +pow(p1.y-p2.y,2));
    printf("%f is the distance between the points", dist);
    return 0;
}
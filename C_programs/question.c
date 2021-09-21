#include<stdio.h>
int main()
{
    int i=8,j=5;
    float x=0.005,y=-0.01;
    char c='c',d='d';
    printf("%d",((i-3*j)%(c+2*d)/(x-y)));
    return 0;
}
/*Program to evaluate arithematic expression ((a -b / c * d + e) * (f +g))
Author: Fahad P N
Roll no.: 330
Date: 09-06-2021
Experiment 01 problem 3 */

#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,s;
	printf("Enter the values in order (a,b,c,d,e,f,g)\n");
	scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
	s = (a -b / c * d + e) * (f +g);
	printf("solution %d",s);
	return 0;
}
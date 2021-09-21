/*Program to find largest number
Author: Fahad P N
Roll no.: 330
Date: 09-06-2021
Experiment 02 problem 01 */
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("%d is the largest number",a);
		else
			printf("%d is the largest number",c);
	}
	else
	{
		if(b>c)
			printf("%d is the largest number",b);
		else
			printf("%d is the largest number",c);
	}
	return 0;
}
#include<stdio.h>
#include<math.h>

int main()
{
    int j,z[10],i=0,k,arm=0,n;
    printf("Enter the number you want to check:\n");
    scanf("%d",&n);
    j=n;
    for(;j>0;)
    {
        i++;
        z[i]=j%10;
        j=floor(j/10);
    }
    k=i;
    for(;i>0;i--)
    {
        arm+=pow(z[i],k);
    }
    
    if (arm==n)
        printf("%d is an armstrong number",n);
    else
        printf("%d is not an armstrong number",n);
    return 0;
}
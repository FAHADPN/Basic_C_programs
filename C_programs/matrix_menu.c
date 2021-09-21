/* Program to manipulate matrix
    Author  : Fahad P N
    Roll no.: 330
    date    : 02/09/2021
    Experiment 06
    Problem 3
*/
#include<stdio.h>

void sum(int a[20][20],int b[20][20],int s[20][20],int n,int m);
void product(int a[20][20],int b[20][20],int p[20][20],int n,int m);
void display(int a[20][20],int n,int m);
void transpose(int a[20][20],int t[20][20],int n,int m);
void add(int a[20][20],int n,int m);

int main()
{
    int a[20][20],b[20][20],sums[20][20],p[20][20],t[20][20],n,m,r,s,option,trans_option,ques;
    printf("Enter the rows and coloumns of matrix A: ");
    scanf("%d",&n);
    scanf("%d",&m);
    printf("Enter the elements of matrix A: \n");
    add(a,n,m);
    printf("Enter the rows and coloumns of matrix B:");
    scanf("%d",&r);
    scanf("%d",&s);
    printf("Enter the elements of matrix B: \n");
    add(b,r,s);   
    do
    {
        printf("\n \t \t Matrix Manipulation\n");
        printf("\n \t \t---------------------\n");
        printf("\n 1. Sum of matrix \n 2. Product of matrices \n 3. Transpose of a Matrix\n");
        scanf("%d",&option);
        printf("\n \t \t---------------------\n")
        switch(option)
        {
            case 1:
                if(n==r && m==s)
                {
                    sum(a,b,sums,n,m);

                }
                else
                {
                    printf("Matrices cannot be added");
                }
                break;
            case 2:
                if(n==s)
                {
                    product(a,b,p,n,r);
                }
                else
                {
                    printf("Matrix A and B cannot be multiplied");
                }
                break;
            
            case 3:
                printf("Enter the Matrix to be transposed \n 1. Matrix A\n 2. Matrix B \n");
                scanf("%d",&trans_option);
                if(trans_option == 1)
                {
                    transpose(a,t,n,m);
                }
                else if(trans_option ==2)
                {
                    transpose(b,t,r,s);
                }
                else 
                {
                    printf("Enter a valid option");
                }
                break;
            default:
                printf("\n Enter a valid option");
        }
        printf("\n Do you want to continue?\n 1. Yes \n 2. No \n");
        scanf("%d",&ques);
    }while(ques == 1);
}

void add(int a[20][20],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
}

void display(int a[20][20],int n, int m)
{
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void sum(int a[20][20],int b[20][20],int s[20][20],int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n Matrix Sum of A and B");
    display(s,n,m);
}
void product(int a[20][20],int b[20][20],int p[20][20],int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            p[i][j]=0;
            for(int k=0;k<m;k++)
            {
            p[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\n Matrix Product of A and B");
    display(p,n,m);
}
void transpose(int a[20][20],int t[20][20],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            t[i][j]=a[j][i];
        }
    }
    printf("\n Transpose of matrix");
    display(t,n,m);
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row1,column1,row2,column2;
    printf("enter the number of rows in matrix 1: ");
    scanf("%d",&row1);
    printf("enter the number of column in matrix 1: ");
    scanf("%d",&column1);
    printf("enter the number of rows in matrix 2: ");
    scanf("%d",&row2);
    printf("enter the number of column in matrix 2: ");
    scanf("%d",&column2);
    int A[row1][column1],B[row2][column2],C[row1][column2];
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column1;j++)
        {
            printf("enter the %dth %dth element of matrix 1: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<column2;j++)
        {
            printf("enter the %dth %dth element of matrix 2: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column2;j++)
        {
            int sum=0;
            for(int k=0;k<column1;k++)
            {
                sum+=A[i][k]*B[k][j];
            }
            C[i][j]=sum;
        }
    }
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column1;j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<column2;j++)
        {
            printf("%d  ",B[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column2;j++)
        {
            printf("%d  ",C[i][j]);
        }
        printf("\n");
    }
}
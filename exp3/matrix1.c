#include <stdio.h>

int main()
{
    
    int A[2][2],B[2][2],C[2][2],i,j;
    int p,q,r,s,t,u,v;
    
    printf("\nEnter numbers for matrix 2x2 A:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);
            }
    }
    
        printf(" \nA matrix is:\n");
    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            printf("\t%d \t",A[i][j]);
            }
    }
    
        printf("\nEnter numbers for matrix 2x2 B:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&B[i][j]);
            }
    }
    
         printf("\n B matrix is:\n");
    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            printf("\t%d \t",B[i][j]);
            }
    }

     
       for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            C[i][j]=0;
            for(int k=0;k<2;k++)
            {
                C[i][j]= C[i][j] + (A[i][k] * B[k][j]);
            }
           
        }
    }

    printf("ANswer of matrix C::");
    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            printf("\t%d \t",C[i][j]);
        }
    }

      
}
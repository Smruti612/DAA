#include <stdio.h>

int main()
{
    
    int A[3][3],B[3][3],C[3][3],i,j;
    int p,q,r,s,t,u,v;
    
    printf("\nEnter numbers for matrix 2x2 A:\n");
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)
        {
            scanf("%d",&A[i][j]);
            }
    }
    
        printf(" \nA matrix is:\n");
    for(i=1;i<=2;i++)
    {
        printf("\n");
        for(j=1;j<=2;j++)
        {
            printf("\t%d \t",A[i][j]);
            }
    }
    
        printf("\nEnter numbers for matrix 2x2 B:\n");
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)
        {
            scanf("%d",&B[i][j]);
            }
    }
    
         printf("\n B matrix is:\n");
    for(i=1;i<=2;i++)
    {
        printf("\n");
        for(j=1;j<=2;j++)
        {
            printf("\t%d \t",B[i][j]);
            }
    }
    
    p= (A[1][1] + A[2][2]) * (B[1][1]+B[2][2]);
    q= (A[2][1] + A[2][2]) *B[1][1];
    r=A[1][1] * (B[1][2]-B[2][2]);
    s= A[2][2] * (B[2][1]-B[1][1]);
    t= (A[1][1] + A[1][2])*B[2][2];
    u= (A[2][1] - A[1][1]) * (B[1][1]+B[1][2]);
    v= (A[1][2] - A[2][2]) * (B[2][1]+B[2][2]);
    
    C[1][1] = p+s-t+v;
    C[1][2] = r+t;
    C[2][1] = q+s;
    C[2][2] = p+r-q+u;
    
        printf("\nAnswer for C matrix:\n");
    for(i=1;i<=2;i++)
    {
         printf("\n");
        for(j=1;j<=2;j++)
        {
            printf("\t%d \t",C[i][j]);
            }
    }

    return 0;
}
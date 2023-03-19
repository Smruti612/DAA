#include <stdio.h>
#include<string.h>

int lcs(char X[], char Y[], int m, int n);
int max(int a, int b);

int lcs(char X[], char Y[], int m, int n)
{
    if(m==0 || n==0)
    {
        return 0;
    }
    
    if(X[m-1]== Y[n-1])
    {
        //printf("%c ",X[m-1]);
        return 1+ lcs(X,Y,m-1,n-1);
    }
    else
    {
        //printf("%c",max(lcs(X,Y,m-1,n),lcs(X,Y,m,n-1)))
        return max(lcs(X,Y,m-1,n),lcs(X,Y,m,n-1));
    }
    
    
}

void lcsAlgo(char X[], char Y[], int m, int n)
{
    int table[20][20];
    int i,j;
    for(i=0;i<=m;i++)
    {
        table[i][0]=0;
    }
     for(i=0;i<=n;i++)
    {
        table[0][i]=0;
    }
    
    for(i=1;i<=m;i++)
    {
         for(int j=1;j<=n;j++)
         {
             if(X[m-1]==Y[n-1])
             {
                 table[i][j]= table[i-1][j-1] + 1;
             }
             else if (table[i-1][j] >= table[i][j-1])
             {
                 table[i][j]=table[i-1][j];
             }
             else 
             {
                 table[i][j]= table[i][j-1];
             }
         }
    }
    
    int num = table[m][n];
    char result[num + 1];
   result[num]='\0';
    
    int p=m,q=n;
    while(p>0 && q>0)
    {
        if(X[p-1]==Y[q-1])
        {
          result[num-1] = X[p-1];
          //result[num-1] = Y[q-1];
          p--;
          q--;
         num--;
        }
        else if(table[p-1][q]> table[p][q-1])
        {
            p--;
        }
        else 
        {
            q--;
        }
       
    }
    
    printf("String1 : %s \nString 2 : %s \n", X, Y);
     printf("LCS: %s", result);
}

int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}



int main()
{
    printf("\nHello World\n");
    char S1[20] = "ABC";
    char S2[20] = "PQR";
    int m = strlen(S1);
    int n = strlen(S2);
   
   lcsAlgo(S1,S2,m,n);
   printf("\n length of longest common subsequence :: %d\n",lcs(S1,S2,m,n));

    return 0;
}
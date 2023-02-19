#include <stdio.h>
#include <conio.h>  
#include <stdlib.h> 
#include <time.h>
int main()
{
   
    int n,i;
  printf("enter number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]= rand() % 100000 + 1;
        printf("  %d \n ",a[i]);
    }
    return 0;
}

#include <stdio.h>
#include <conio.h>  
#include <stdlib.h> 
#include <time.h>
//#define CLOCKS_PER_SEC ((clock_t)(1000))


void selection(int a[],int n);
void display(int a[],int n);
void swap(int *x,int *y);
int main()
{
   
    int n,i;  clock_t start,end;
    printf("enter number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]= rand() % 1000 + 1;
        printf("%d  ,",a[i]);
    }
      double time1; 
    start=clock();
   selection(a,n);
    end=clock();
   display(a,n);
    
    time1= ((double)(end - start))/CLOCKS_PER_SEC;
    
    printf("\n time taken for %d elements: %lf\n ",n,time1);
    
    

    return 0;
}

void display(int a[],int n)
{
    int i;

    printf("\nANS:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ,",a[i]);
    }
}
void swap (int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void selection(int a[],int n)
{
    int i,j;
    int min;int temp;
    for(i=0;i<n-1;i++)
    { 
        min=i;
        for(j=i+1;j<n;j++)
        {
          if(a[min] > a[j])
         {
             
            min=j;
          }
         
        }
       swap(&a[min],&a[i]); 
       
        
    }
}
#include <stdio.h>


void selection(int a[],int n);
void display(int a[],int n);
void swap(int *x,int *y);
int main()
{
   
    int n,i;
    printf("enter number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    selection(a,n);
    display(a,n);

    return 0;
}

void display(int a[],int n)
{
    int i;
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
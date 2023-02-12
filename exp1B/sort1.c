#include <stdio.h>
#include <conio.h>  
#include <stdlib.h> 
#include <time.h>

//#define CLOCKS_PER_SEC ((clock_t)(1000))

void insertionsort(int a[],int n);
void insert1(int a[],int n);
void display(int a[],int n);
int main()
{
   
    int n,k=0;
    clock_t start,end;
    printf("\nenter the no. of elements :");
    scanf("%d",&n);
    int a[n],num;
    for(k=0;k<n;k++)
    {
        a[k]= rand() % 1000 + 1;
        printf("%d  ,",a[k]);
    }
     double time1; 
    start=clock();
    insertionsort(a,n);
    end=clock();
    display(a,n);
    
    time1= ((double)(end - start))/CLOCKS_PER_SEC;
    
    printf("\n time taken for %d elements: %lf\n ",n,time1);
    return 0;
}

void display(int a[],int n)
{
     int i;
     printf("\nAns:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ,",a[i]);
    }
}

void insertionsort(int a[],int n)
{
    int temp,i,j;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        
        while(j>=0 && a[j]>temp)
        {
           a[j+1]=a[j];
            j=j-1;
        }
       a[j+1]=temp; 
    }
}

void insert1(int a[], int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] > a[j] )
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

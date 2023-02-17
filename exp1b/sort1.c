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
   
    int n,num,k=0;
    clock_t start,end;double time1; 
    printf("\nenter the no. of elements :");
    scanf("%d",&n);
      
      FILE *fh;int a[100000];
      fh=fopen("C:\\Users\\Lenovo\\Desktop\\input.txt","r");
      if(fh==NULL)
      {
        printf("ERROR in file opening");
      }
      
     int block=1;

     while(block<=1000)
     {
                  for(k=0;k<n;k++)
              {
                fscanf(fh,"%d",&a[k]);
                printf("%d ,",a[k]);
              }
                       start=clock();
                      insertionsort(a,n);
                       end=clock();
                       //display(a,n);
                   time1= ((double)(end - start))/CLOCKS_PER_SEC;   
                   printf("\n Time taken by selection sort:  %lf ",time1);
                   n=n+100;
                   block++;
     }
      

    
   fclose(fh);   
    
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

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
                      selection(a,n);
                       end=clock();
                       display(a,n);
                   time1= ((double)(end - start))/CLOCKS_PER_SEC;   
                   printf("\n  Time take by selection sort : %lf ",time1);
                   n=n+100;
                   block++;
     }
      

    
   fclose(fh);   
    
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
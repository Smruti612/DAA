#include <stdio.h>
#include<stdlib.h>
#include<time.h>


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

int part(int a[],int lb,int ub)
{
    int pivot=a[lb];
    int i,j;
    i=lb;j=ub;
    
    while(i<j)
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]> pivot)
        {
            j--;
        }
        
        if(i<j)
        {
            swap(&a[i],&a[j]);
        }
    }
    
    swap(&a[lb],&a[j]);
    
    return j;
    
}





void Quicksort(int a[],int lb, int ub)
{
    if(lb<ub)
    {
        int loc;
        loc=part(a,lb,ub);
        Quicksort(a,lb,loc-1);
        Quicksort(a,loc+1,ub);
    }
}

int main()
{
    printf("\nHello World\n");
    
   /*int a[] = { 11, 30, 24, 7, 31, 16, 39, 41 };  
    int n = sizeof(a) / sizeof(a[0]); */

     int n,k=0;
    clock_t start,end;double time1; 
   // printf("\nenter the no. of elements :");
    //scanf("%d",&n);
      
      FILE *fh;
      fh=fopen("C:\\Users\\Lenovo\\Desktop\\input.txt","r");
      if(fh==NULL)
      {
        printf("ERROR in file opening");
      }
          int block =1;
          n=100;
          while(block<=1000)
          {
               int a[n];
              for(k=0;k<n;k++)
              {
                fscanf(fh,"%d",&a[k]);
                //printf("%d ,",a[k]);
              }
                       start=clock();
                      Quicksort(a,0,n-1);
                      //display(a,n);
                       end=clock();
                       
                  time1= ((double)(end - start))/CLOCKS_PER_SEC;   
                   printf("\n  %lf ",time1);
                   n=n+100;
                   block++;
          }
     
   fclose(fh); 
} 
    
   
   // display(a,n);


   // return 0;

   
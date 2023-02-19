#include<stdio.h> 
#include <conio.h>  
#include <stdlib.h> 
#include <time.h>

void mergesort( int a[],int lb,int ub);
void mergeFunc(int a[], int lb,int mid,int ub);

void mergeFunc(int a[], int lb,int mid,int ub)
  {
      int i,j,k,n1,n2;
      
      n1=(mid-lb)+1;
      n2=ub-mid;
      int x[n1],y[n2];
      
      for(i=0;i<n1;i++)
      {
          x[i]=a[lb+i];
      }
      
      for(j=0;j<n2;j++)
      {
          y[j]=a[mid+1+j];
      }
      
      i=j=0;
      k=lb;
      
      while(i<n1 && j<n2)
      {
          if(x[i]<=y[j])
          {
              a[k]=x[i];
              i++;
          }
          else 
          {
              a[k]=y[j];
              j++;
          }
          k++;
      }
      
      while(i<n1)
      {
          a[k]=x[i];
          i++;k++;
      }
      
        while(j<n2)
      {
          a[k]=y[j];
          j++;k++;
      }
  }



void mergesort( int a[],int lb,int ub)
  {
    if(lb < ub)
    {
      int mid= (ub+lb)/2 ;
      mergesort( a,lb,mid);
      mergesort(a,mid+1,ub);
      
      mergeFunc(a,lb,mid,ub);
    }
}



void display(int a[],int n)
{
  int i;
  printf("\nsorted array:\n");
  for(i=0;i<n;i++)
  { 
     printf("%d ,",a[i]);  
  }
}


int main()
 {
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
                      mergesort(a,0,n-1);
                      //display(a,n);
                       end=clock();
                       
                  time1= ((double)(end - start))/CLOCKS_PER_SEC;   
                   printf("\n  %lf ",time1);
                   n=n+100;
                   block++;
          }
     
   fclose(fh); 
}
   /*
   
    display(a,n);
  }
   */ 
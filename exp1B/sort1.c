#include <stdio.h>

void insertionsort(int a[],int n);
void insert1(int a[],int n);
void display(int a[],int n);
int main()
{
   
    int n,k=0;
    printf("\nenter the no. of elements :");
    scanf("%d",&n);
    int a[n];
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    //int n[]={40,20,60,10,50,30};
    insertionsort(a,n);
    //insert1(a,n);
    display(a,n);

    return 0;
}

void display(int a[],int n)
{
     int i;
     printf("Ans:\n");
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

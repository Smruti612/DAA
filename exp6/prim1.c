#include <stdio.h>
#include<stdbool.h>
#include<string.h>
#define INF 999999
#define v 5


int minimumKey(int key[],bool mSet[])
{
    int min=INF;
    int minindex;
    int c;
    for(c=0;c<v;c++)
    {
        if(mSet[c]==false && key[c]<min)
        {
            min=key[c];
            minindex=c;
        }
    }
    return minindex;
}

int printMST(int parent[],int graph[v][v])
{
    printf("Edge \tWeight\n");
    for (int i = 1; i < v; i++)
        {
            printf("%d - %d \t%d \n", parent[i], i,
               graph[i][parent[i]]);
        }

       int sum=0;
        for(int j=1;j<v;j++)
        {
           sum=graph[j][parent[j]]+sum;
        }

        printf("\n Minimum Weight :: %d ",sum);

}


void prim(int graph[v][v])
{
    int parent[v];
    int k[v];
    bool mSet[v];
    int i,count,p,j;
    for(i=0;i<v;i++)
    {
        k[i]=INF;
        mSet[i]=false;
    }
    k[0]=0;
    parent[0]=-1;
    
    for(count=0;count<v-1;count++)
    {
       p=minimumKey(k,mSet);
       mSet[p]=true;
       for(j=0;j<v;j++)
       {
           if(graph[p][j] && mSet[j]==false && graph[p][j]<k[j])
           
           {
               parent[j]=p;
               k[j]=graph[p][j];
           }
       }
    }
   printMST(parent, graph); 
    
}

int main()
{
    int i,j;
    int numedge;
    
    //printf("No of vertices:");
    //scanf("%d",&v);
    int k[v];
    int G[v][v];
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            printf("Enter G[%d][%d]:",i+1,j+1);
            scanf("%d",&G[i][j]);
        }
    }

   prim(G);
   
   return 0;
}

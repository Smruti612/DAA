#include<stdio.h>
#include<math.h>

double f1(double x,double y);
double f2( double x);
double f3(double x);
double f4(double x);
double f5(double x);
double f6(double x);
double f7(double x);
double f8(double x);
double f9(double x);
double f10(double x);


void main()
{
 
   double n[]={0,10,20,30,40,50,60,70,80,90,100}; 
   double t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;
   int i;

    printf("\n 1] F1((3/2)^n) \n");  
   for(i=0;i<11;i++)
   {
      
        t1= f1( 1.5, n[i]);
      printf("\n%0.1lf= %0.2lf\n" ,n[i],t1);
   }
   
      
      printf("\n 2] F2[e^n]  \n");
       for(i=0;i<11;i++)
       {
           t2= f2(n[i]);
            printf("\n%0.1lf= %0.2lf\n" ,n[i],t2);
       }
      
       printf("\n 3] F3[lg(n!)]\n");
        for(i=0;i<11;i++)
       {
           t3=f3(n[i]);
           printf("\n%0.1lf= %0.2lf\n" ,n[i],t3);
       }
      
      printf("\n 4] F4[2^(lg n)]  \n");
       for(i=0;i<11;i++)
       {
           t4=f4(n[i]);
           printf("\n%0.1lf= %0.2lf\n" ,n[i],t4);
       }
       printf("\n 5] F5[(lg n)^0.5]  \n");
       for(i=0;i<11;i++)
       {
           t5=f5(n[i]);
           printf("\n%0.1lf= %0.2lf\n" ,n[i],t5);
       }
       
        printf("\n 6]  F6[2^((2*log2(x))^0.5)]  \n");
       for(i=0;i<11;i++)
       {
           t6=f6(n[i]);
           printf("\n%0.1lf= %0.2lf\n" ,n[i],t6);
       }
       
        printf("\n 7] F7[ln(ln n)] \n");
       for(i=0;i<11;i++)
       {
           t7=f7(n[i]);
           printf("\n%0.1lf= %0.2lf\n" ,n[i],t7);
       }
       
        printf("\n 8] F8[n*lg(lg n)] \n");
       for(i=0;i<11;i++)
       {
           t8=f8(n[i]);
           printf("\n%0.1lf= %0.2lf\n" ,n[i],t8);
       }
       
        printf("\n 9] F9[n^3] \n");
       for(i=0;i<11;i++)
       {
           t9=f9(n[i]);
           printf("\n%0.1lf= %0.2lf\n" ,n[i],t9);
       }
       
        printf("\n 10] F10[2^(2^n+1)] \n");
       for(i=0;i<11;i++)
       {
           t10=f10(n[i]);
           printf("\n%0.1lf= %0.2lf\n" ,n[i],t10);
       }
}


double f1(double x,double y)
{
    return pow(x,y);    //(3/2)^n
}

double f2(double x)
{
    return exp(x);   //e^n
}

double f3(double x)
{
    int i,fact=1;
    
    for(i=1;i<=x;i++)
    {
        fact=fact*i;   //lg(n!)
    }
    return log2(fact);
}

double f4(double x)
{
    double res=log2(x);
    return pow(2,res);         //2^(lg n)
}

double f5(double x)
{
    double res=log2(x);
    return sqrt(res);       //(lg n)^0.5
}

double f6(double x)
{
    double res=sqrt(2*log2(x));      //2^((2*log2(x))^0.5)
    return pow(2,res);
}

double f7(double x)
{
    return log(log(x));   //ln(ln n)
}

double f8(double x)
{
   return x*(log2(log2(x)));     //n*lg(lg n)
    
}

double f9(double x)
{
    
    return pow(x,3);               //n^3
}

double f10(double x)
{
    double res=pow(2,x+1);
    return pow(2,res);              //2^(2^n+1)
}


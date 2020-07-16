#include<iostream.h>
int fact(int n,int a)
{
   if(n==0 || n==1) return a;
   return fact(n-1,n*a);      //There is not stack needed as no memory is to be saved.... 'a' is used as an accumulator
}
int main()
{
  int n=5;
  return fact(n);
}

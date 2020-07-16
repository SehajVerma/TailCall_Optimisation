#include<iostream.h>
int fibo(int n,int a=0,int b=1)
{
  if(n==0) return b;
  return fibo(n-1,b,a+b);
}
int main()
{
  int n=10;
  return fibo(n);
}

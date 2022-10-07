//friendly array.
#include<stdio.h>
int main()
{
  int n=3,sum=0;
  int arr[]={4,1,5};
  for(int i=0;i<n;i++)
  {
    sum=sum+(arr[i]*(2*i-n+1));
     //diff count=n-i-1;
     //i is sum count 
    }
   printf("%d",sum);
}

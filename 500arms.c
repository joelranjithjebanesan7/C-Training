#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a=100,n=1000,temp,sum,r;
  while (a<n) {
    temp=a;
    sum=0;
    while (temp!=0)
    {
      r=temp%10;
      sum=sum+(r*r*r);
      temp=temp/10;
    if (sum==a) {
      printf("%d\n",sum );
    }
  }
  a=a+1;
}
  return 0;
}

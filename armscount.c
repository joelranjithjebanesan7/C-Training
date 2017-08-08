#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a=100,n=1000,sum,r,count=0,temp;
  while (a<n) {
    temp=a;
    sum=0;
    while (temp!=0) {
    r=temp%10;
    sum=sum+(r*r*r);
    temp/=10;}
  if (sum==a) {
    count=count+1;
    printf("%d\n",sum );
    printf("count is %d\n",count );
  }
  a=a+1;
  }


  return 0;
}

#include "stdio.h"
int main(int argc, char const *argv[]) {
  int n,c;
  scanf("%d",&n );
  c=sum(n);
  if (c==n) {
  printf("num is armsrong\n" );
}
  return 0;
}
int sum(int x)
{
  int r,sum=0,temp;
  temp=x;
  while (temp!=0) {
  r=temp%10;
  sum=sum+(r*r*r);
  temp=temp/10;
}return sum;
}

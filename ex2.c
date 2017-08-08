#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  int n,c;
  scanf("%d",&n );
  c=decimal(n);
  printf("decimal num is%d\n",c );
  return 0;
}
int decimal(int x)
{int sum=0,a=0,r;
while (x!=0) {
  r=x%10;
  sum=sum+(r*pow(2,a));
  x=x/10;
  a=a+1;
}return sum;
}

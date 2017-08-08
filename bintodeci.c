#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  int n,sum=0,r,a=0;
  printf("enter the binary number \n" );
  scanf("%d",&n );
  while (n!=0) {
    r=n%10;
    sum=sum+(r*pow(2,a));
    n=n/10;
    a=a+1;
  }
  printf("after conversion\n" );
  printf("the decimal number is%d\n",sum );
  return 0;
}

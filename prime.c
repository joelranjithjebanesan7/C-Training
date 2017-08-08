#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a=2,n;
  printf("enter the number" );
  scanf("%d",&n );
  for(a=2;a<=n-1;a=a+1)
  {
  if (n%a==0) {
    printf("%d is not a prime\n",n);
  }
}
  if (a==n) {
    printf("%d is a prime number\n",n );
  }
  return 0;
}

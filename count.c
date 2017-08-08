#include "stdio.h"
int main(int argc, char const *argv[]) {
  int n,count=0,r;
scanf("%d",&n );
  while (n!=0) {
    r=n%10;
    count=count+1;
  n/=10;
  }
  printf("%d",count );
  return 0;
}

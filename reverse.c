#include "stdio.h"
int main(int argc, char const *argv[]) {
  int n,r,rn=0;
  scanf("%d",&n );
  while (n!=0) {
    r=n%10;
    rn=rn*10+r;
    n=n/10;
  }
  printf("the reversed num is %d",rn );
  return 0;
}

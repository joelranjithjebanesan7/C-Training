#include "stdio.h"
int main(int argc, char const *argv[]) {
  float a=1,n,sum=0;
  scanf("%f",&n );
  while (a<=n) {
    sum=sum+a/(a+1);
    a=a+1;
  }
  printf("%f",sum );
  return 0;
}

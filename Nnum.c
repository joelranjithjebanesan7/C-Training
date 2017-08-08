#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a=1,n,pdt=1;
  printf("enter value for n" );
  scanf("%d",&n );
  while (a<=n) {

  pdt=pdt*a;
  a=a+1;  /* code */
  }
  printf("product is %d\n",pdt );
  return 0;
}

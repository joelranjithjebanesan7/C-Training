#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a,b,c;
  printf("enter value for a\n" );
  scanf("%d",&a );
  printf("enter value for b \n" );
  scanf("%d",&b );
  a=a+b;
  b=a-b;
  a=a-b;
  printf("after swapping\n");
  printf("a=%d\n",a );
  printf("b=%d\n",b );

  return 0;
}

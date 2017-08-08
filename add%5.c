#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a,n,sum=0;
  printf("enter a \n" );
  scanf("%d",&a);
  printf("enter n \n" );
scanf("%d",&n);
  while (a<=n) {

  if (a%2!=0&&a%5==0) {
    sum=sum+a;

    /* code */
}
  a=a+1;

    /* code */
  }
  printf("sum is %d\n",sum );
  return 0;
}

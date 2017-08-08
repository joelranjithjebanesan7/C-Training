#include "stdio.h"
int main(int argc, char const *argv[]) {
  int n,r,rn=0,temp;
  printf("enter value for n\n");
  scanf("%d",&n );
  temp=n;
  while (temp!=0) {
    r=temp%10;
    rn=rn*10+r;
    temp=temp/10;
    //temp=rn;
  }
  if (rn==n) {
    printf("%d is a palindrome\n",rn );
  }
  else
  printf("it is not a palindrome\n" );
  return 0;
}

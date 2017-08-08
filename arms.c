#include "stdio.h"
int main(int argc, char const *argv[]) {
  int n,r,sum=0,temp;
  scanf("%d",&n);
  temp=n;
while (n>0)
 {
  r=n%10;
  sum=sum+(r*r*r);
  n=n/10;
}
  if (sum==temp)
  {
    printf("the number is armstrong number " );
}
else
printf("the num is not a armstrong number " );
  return 0;
}

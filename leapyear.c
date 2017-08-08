#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a;
  scanf("%d",&a );
  if (a%4==0&&a%100!=0) {
    printf("%d is leapyear",a );
    /* code */
  }
  else
  {
  printf("%d is not a leapyear\n",a );
}
return 0;
}

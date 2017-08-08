#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a[100],n,c,i;
  scanf("%d",&n );
  for ( i = 0; i < n; i++) {
    scanf("%d",&a[i] );
  }
  printf("enter the num" );
  scanf("%d",&c );
  for (i = 0; i < n; i++) {
    if (c==a[i]) {
      printf("num is found" );
      /* code */
    }

  }
  return 0;
}

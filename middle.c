#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a[100],n,i;
  scanf("%d",&n );
  for ( i = 0; i < n; i++) {
   scanf("%d", &a[i] );

  }
printf("%d\n",a[n-1] );
  return 0;
}

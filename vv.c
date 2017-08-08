#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a[100],n,i,sum =0;
  scanf("%d",&n );
  for ( i = 0; i < n; i++) {
    scanf("%d",&a[i] );

    /* code */
  }
  for (i = 0; i < n; i++) {
    if (!(a[i]%2==0)) {
      sum=sum+a[i];

      /* code */
    }
    // code */
  }printf("%d\n",sum );
  return 0;
}

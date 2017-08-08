#include "stdio.h"
#include "string.h"
int main(int argc, char const *argv[]) {
 char a[100]="joel is software engineer",i;
 int n=strlen(a);
 printf("%d\n",sizeof(a) );
 printf("%d\n",n );
 for ( i = 0; i < n; i++) {
   printf("%c",a[i] );
 }
  return 0;
}

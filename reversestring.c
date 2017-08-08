#include "stdio.h"
#include "string.h"
int main(int argc, char const *argv[]) {
  char a[100],b[100];
  scanf("%s",a );
  int len=strlen(a);
  while(len>0)
  {
    printf("%c",a[len-1] );
    len--;
  }
printf("\n%d",len );
return 0;
}

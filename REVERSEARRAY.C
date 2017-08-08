#include "stdio.h"
#include "string.h"
int main(int argc, char const *argv[]) {
  char a[100];
  int n,i,len,count=0;
  scanf("%d",&n );
  gets(a);
  len=strlen(a);
  for (i = 0; i <len; i++)
    {
      if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
      {
        count++;
      }
    }
    printf("%d\n",count );

  return 0;
}

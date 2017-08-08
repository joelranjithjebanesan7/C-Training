#include<stdio.h>
union a{
  int no;
  char name[10];
};
void main(){
  union a b;

    scanf("%d",&b.no);

    scanf("%s",b.name);
    printf("\n%d",b.no);
    printf("\n%s",b.name);
  }

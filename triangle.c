#include "stdio.h"
int main(int argc, char const *argv[]) {
  float base,height,area;
  scanf("%f%f",&base,&height );
  area=(base*height)/2;
  printf("\narea of triangle is %.2f",area );
  return 0;
}

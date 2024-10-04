#include <stdio.h>

int main() {
  int i,l,b,years=0;
  scanf("%d %d",&l,&b);
  while (l<=b)
  {
    l=l*3;
    b=b*2;
    years++;
  }
  printf("%d\n",years);
  return 0;
}

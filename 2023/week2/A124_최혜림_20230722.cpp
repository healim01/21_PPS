#include <stdio.h>

int main(void) {
  int num;
  int i;

  scanf("%d",&num);

  for (i=2;i<=num;i++) {
    if (num%i==0) {
      printf("%d\n",i);
      num=num/i;
      i--;
    }
    if (num==1) break;
  }

  return 0;
}
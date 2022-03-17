#include <stdlib.h>
#include <stdio.h>

int main(){
  int avalue = 0;
  int bvalue = 0;
  printf("Enter a value: ");
  scanf(" %d", &avalue);
  printf("Enter a value: ");
  scanf(" %d", &bvalue);
  int mask = 0x80000000;
  int result = (mask & avalue) ^ (mask & bvalue);
  printf("Mask: %08X Value %08X, %08X Result: %08X\n", mask, avalue, bvalue, result);
  if (result == 0) printf("Your values have the same sign\n");
  else printf("Your values have opposite signs\n");
  return 0;
}

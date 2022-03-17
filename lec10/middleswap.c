#include <stdio.h>

int main() {
  unsigned char a = 0xAB;
  unsigned char leftMask = 0xF0;
  unsigned char rightMask = 0x0F;
  unsigned char left = (leftMask & a) ;
  unsigned char right = (rightMask & a) ;
  unsigned char leftShift = left >> 4;
  unsigned char rightShift = right << 4;
  unsigned flipped = leftShift | rightShift;

  printf("Left: %02X Right: %02X\n", left, right);
  printf("Left: %02X Right: %02X\n", leftShift, rightShift);
  printf("Before: %02X After: %02X\n", a, flipped);
}

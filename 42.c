#include <stdio.h>
int assign(void) {
 int y = 40;
 int z = 36;
 return y;
}
int adder(void) {
 int a;
 return a + 2;
}
int main(void) {
 int x;
 assign();
 x = adder();
 printf("x is: %d\n", x);
 return 0;
}

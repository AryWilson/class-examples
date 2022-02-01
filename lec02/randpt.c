#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void rand_point(int* x, int* y, int* z){
	*x = rand()%10;
	*y = rand()%10;
	*z = rand()%10;

}

void main() {
	srand(time(0)); //set the seed of the program to currest system time, so random give dif values each time
  	int x,y,z;
  	rand_point(&x, &y, &z);
  	printf("point: %d, %d, %d\n", x, y, z);
}

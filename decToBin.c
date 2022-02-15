#include <stdio.h>
#include <stdlib.h>

int main(){
  int input;
  printf("Enter a positve decimal number: ");
  scanf(" %i", &input);
  printf("\n");

  while(input>0){
  printf("%i, %i\n",input,input%2);
  input = input/2;
  }

  return 0;
}

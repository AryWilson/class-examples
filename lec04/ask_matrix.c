#include <stdio.h>

int main(){
	int row;
	int col:
	printf("enter a number of rows: ");
	scanf("%i",&row);
	printf("\n");
	printf("enter a number of columns: ");
	scanf("%i",&col);
	printf("\n");
	
	int** matrix = malloc(sizeof(int*) * (row));
	for (int i = 0; i< row;i++){
		matrix[i] = malloc(sizeof(int)*col);
	}
	int i,j;
	for (i=0;i<row;i++){
		for(j=0;j<col;j++){
			int val = 0;
			printf("enter a value for [%i][%i]",i,j);
			scanf("%i",&val);
			matrix[i*col +j] = val;
		}
	}	
	printf("here's your matrix\n")
	for (i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%i"matrix[i*col+j]);
	


	for(int i=0; i<row;i++){
		free(matrix[i]);
	}
	free(matrix);
	matrix = NULL;
	return 0;
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct thread_data {
  float min;
  int starti;
  int endi;
  int min;
  int* array;

}

int *find_min(void *userdata){
  struct thread_data *data = (struct thread_data *) usedata;
  data->min = data->array[starti];
  
  for (int i=starti;i<endi;i++){
    if(data->array[i]<data->min){
      min = data->array[i];
    }
  }
  return min;
}


int main(int argc, char *argv[]) {
  srand(time(0));

  int *values = NULL;
  int size = 0;
  
  if (argc !=2) {
    fprintf(stderr, "usage: %s <n>\n", argv[0]);
    fprintf(stderr, "where <n> is the number of values\n");
    return 1;
  }
  size = strtol(argv[1], NULL, 10);

  values = malloc(sizeof(int) * size);
  int min = RAND_MAX;
  for (int i = 0; i < size; i++) {
    values[i] = rand() % 10000;
    min = values[i] < min? values[i] : min;
    printf("%d\n", values[i]);
  }

//spawn 2 threads (less adn size)
//use nthreads to compute min in an array
//split task umung x number of threads
//set up data to send it
//compare retunr values

pthread_t thread[4];
struct pthread_data data[4];
for(int i = 0; i<4;i++){
  pthread_create(&thread[i],NULL,find_min,&data[i]);
}
for(int i = 0; i<4;i++){
  pthread_joine(&thread[i],&data[i]);
}
int gmin=RAND_MAX;

for(int i =0 ;i<4;i++){
  gmin = data[i].min <gmin? data[i].min : gmin;
}

printf("min = %i\n",gmin);


pthread_create(addr,NULL,find_min,&data)

  printf("The min value is %d\n", min);
  free(values);
  
}


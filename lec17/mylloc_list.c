#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct chunk {
  int size;
  struct chunk *next;
};
struct chunk *flist = NULL;

void *malloc (size_t size) {
  if (size == 0){
    return NULL;
  }


//check free list for memory, if found remove from free list and return address

  void *memory = sbrk(size + sizeof(struct chunk));
  if (memory == (void *) -1) {
    return NULL;
  } else {
    struct chunk* chunk = (struct chunk) memory;
    chunk->size = size;
    chunk->next = NULL;
    return (void*) (chunk + 1);
    //return the memory location + sizeof(chunk)
  }
}

void free(void *memory) {
  // add memory to free list
  return;
}


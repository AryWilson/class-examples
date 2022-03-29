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
<<<<<<< HEAD


//check free list for memory, if found remove from free list and return address

=======
  // Step 1: check free list for memory 
  // If found, remove it from free list, and return it

  // Step 2: only allocated if no memory found
>>>>>>> 8b9ce1f628b95c528a8e16039e4d134d7a5d7d1c
  void *memory = sbrk(size + sizeof(struct chunk));
  if (memory == (void *) -1) {
    return NULL;
  } else {
<<<<<<< HEAD
    struct chunk* chunk = (struct chunk) memory;
    chunk->size = size;
    chunk->next = NULL;
    return (void*) (chunk + 1);
    //return the memory location + sizeof(chunk)
=======
    struct chunk* chunk = (struct chunk*) memory;
    chunk->size = size;
    chunk->next = NULL;
    return (void*) (chunk + 1);
>>>>>>> 8b9ce1f628b95c528a8e16039e4d134d7a5d7d1c
  }
}

void free(void *memory) {
<<<<<<< HEAD
  // add memory to free list
=======
  // Add memory free list
>>>>>>> 8b9ce1f628b95c528a8e16039e4d134d7a5d7d1c
  return;
}


#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<stdio.h>

// set up file Name and stat struct
struct stat *buff;

void get_stat(char *file_name){
  // Allocate memory to stat *buff
  buff = malloc(sizeof(struct stat));
  stat(file_name,buff);
  // Get size of file in int
  int size = buff->st_size;
  printf("size of the file is %d ",size);
  // Release the memory 
  free(buff);
}

int main(){
  // get stat
  get_stat("test.txt");
  return 0;
}

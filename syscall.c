#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<stdio.h>

char *file_name = "test.txt";
struct stat *buff;

void get_stat(){
  buff = malloc(sizeof(struct stat));
  stat(file_name,buff);
  int size = buff->st_size;
  printf("size of the file is %d",size);
  free(buff);
}

int main(){
 get_stat();
  return 0;
}

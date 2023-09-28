#include<stdio.h>

#define PRINT_COORDS()                          \
  do{                                           \
    printf("%s:%d\n", __FILE__, __LINE__);      \
  }while(0);

int main(void) {
  PRINT_COORDS();
  printf("Hello, World");
  return 0;
}

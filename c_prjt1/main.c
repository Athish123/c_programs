#include <func_file.h>

int main(void) 
{

  char *str = "Hello, World!";
  printf("str = %s, lenght = %lu\n", str,strlen(str));


  // call a function in another file
  myPrintHelloMake();

  return 0;
}



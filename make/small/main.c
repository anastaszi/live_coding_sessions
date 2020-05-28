#include <stdio.h>
#include "my_strlen.c"

int main(int ac, char **av) {
  int i = 1;
/*
  while (i < ac) {
    printf("My string [%s] has [%d] characters.\n", av[i], my_strlen(av[i]));
    i++;
  }
*/
  printf("You gave me %d strings\n", i);
  return 0;
}

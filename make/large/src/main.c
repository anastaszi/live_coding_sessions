#include "my_lib.h"

int main(int ac, char **av) {
  int i = 1;

  while (i < ac) {
    printf("My string [%s] has [%d] characters. ", av[i], my_strlen(av[i]));
    if (my_strchr(av[i], 'a') != -1)
      printf("This string has 'a' in it.\n");
    else
      printf("This string doesn't have 'a' in it.\n");
    i++;
  }

  printf("You provided %d strings\n", (ac - 1));
  return 0;
}

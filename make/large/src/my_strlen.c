#include "my_lib.h"

int my_strlen(char *str) {
  char *temp = str;

  while (*temp)
      temp = temp + 1;
  return temp - str;
}

#include "my_lib.h"

int my_strchr(char *str, char a) {
  int index = 0;

  if (my_strlen(str) != 0) {
    while (str[index] != '\0') {
      if (str[index] == a)
        return index;
      index++;
    }
  }
  return (-1);
}

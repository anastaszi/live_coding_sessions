#include <stdlib.h> // for atoi
#include <stdio.h> // for printf
#include <unistd.h> // for malloc
// ... my_triangle(int size, char c)

// my_triangle(3, 'A')
// A A A
// A A
// A

// my_triangle(5, 'b')
// b b b b b
// b b b b
// b b b
// b b
// b

//[ [A,A,A] [A,A] [A] ]
//[ ptr1, ptr2, ptr3 ....]

typedef struct s_crazy_structure {
  int size;
  char **array;
} crazy_structure;

crazy_structure *my_triangle(int size, char c) {
  crazy_structure *result;
  int i;
  int length;
  int j;

  result = NULL;
  if ((result = (crazy_structure *)malloc(sizeof(crazy_structure)))) {
    result->size = size;
    result->array = (char **)malloc(sizeof(char *) * size);
    for (i = 0; i < size; i++) {
      length = size - i + 1;
      result->array[i] = (char *)malloc(sizeof(char) * length);
      for (j = 0; j < length - 1; j++) {
        result->array[i][j] = c;
      }
      result->array[i][length - 1]= '\0';
    }
  }
  return result;
}


int main(int ac, char **av) {
  int i;

  if (ac > 2) {
    crazy_structure *myTriangle;
    myTriangle = my_triangle(atoi(av[1]), av[2][0]);

    for (i = 0; i < myTriangle->size; i++) {
      printf("%s\n", myTriangle->array[i]);
    }
    for (i = 0; i < myTriangle->size; i++) {
      free(myTriangle->array[i]);
    }
    free(myTriangle->array);
    free(myTriangle);
  }
  return 0;
}

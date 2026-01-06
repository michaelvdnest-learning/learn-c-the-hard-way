#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  i = 1;
  //for (i = 1; i < argc; i++){
  while (i < argc) {
    printf("arg %d: %s\n", i, argv[i]);
    i++;
  }

  i = 0;
  while (i < 25) {
    printf("%d ", i);
    i++;
  }
  printf("\n");

  i = 25;
  while (i >=0) {
    printf("%d ", i);
    i--;
  }
  printf("\n");

  char *states[] = {
    "California", "Oregon",
    "Washington", "Texas"
  };

  i = 0;
  int num_states = 4;
  //for (i = 0; i < num_states; i++) {
  while (i < num_states) {
    printf("state %d: %s\n", i, states[i]);
    i++;
  }

  return 0;
}

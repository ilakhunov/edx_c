#include <stdio.h>
int main() {
  char words[69][40];
  int i;
  printf("Please enter three words: ");
  for (i = 1; i < 69; i++) {
    scanf("%s", words[i]);
  }
  printf("You entered: \n");
  for (i = 68; i > 0; i--) {
    printf("%s ", words[i]);
  }
    return 0;
  }

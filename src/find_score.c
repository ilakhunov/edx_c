#include <stdio.h>

void behind(int *, int);

int main(void) {
  int array[10];
  int N, i;

  scanf("%d", &N);
  for (i = 0; i < N; i++) {
    scanf("%d", &array[i]);
  }
  behind(array, N);
  for (i = 0; i < N; i++) {
    printf("%d\n", array[i]);
  }

  return 0;
}

/* Write your function behind() here: */
void behind(int *a, int b) {
  int i = 0;
  int h = 0;
  for (i = 0; i < b; i++) {
    if (a[i] > h) {
      h = a[i];
    }
  }
  for (i = 0; i < b; i++) {
    a[i] = h - a[i];
  }
}
#include <stdio.h>

int main() {

  int size;
  scanf("%d",&size);
  // loop to print the pattern
  for (int i = 0; i < size; i++) {
    // print column
    for (int j = 0; j <= i; j++) {
      printf("%d", (j+1));
    }
    printf("
");
  }
  return 0;
}
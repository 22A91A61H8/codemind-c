#include <stdio.h>

int main() {
  // size of the triangle
  int size;
  scanf("%d",&size);

  for (int i = 0; i < size; i++) {
    // printing stars
    for (int j = 0; j < size-i; j++) {
      printf("*");
    }
    printf("
");
  }
  return 0;
}
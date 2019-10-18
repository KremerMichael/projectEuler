#include <stdio.h>

int main() {

  int one = 1;
  int two = 2;
  int middle = 0;
  
  int sum = 0;

  while(two <= 4000000) {
    if ((two % 2) == 0) {
      sum += two;
    }
    middle = two;
    two = one + two;
    one = middle;
  }

  fprintf(stderr, "the sum is %d\n", sum);
  return sum;
}



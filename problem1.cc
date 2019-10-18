#include <stdio.h>

int main(){

  int sum = 0;

  for(int i = 0; i < 1000; i++) {
    if ((i % 3) == 0 || (i % 5) == 0) {
      sum += i;
      fprintf(stderr, "i is %d, sum is %d\n", i, sum);
    }
  }


  fprintf(stderr, "the sum is %d\n", sum);
  return sum;
}

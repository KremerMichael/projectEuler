#include <stdio.h>

int main() {

  bool logic = false;
  int number = 22;
  int count = 0;

  //while not reached
  while(!logic) {
    //iterate through factors
    for (int i = 11; i < 21; i++) {
      if((number % i) == 0) {
	  count++;
	}
    }
    if (count == 10) {
      logic = true;
      fprintf(stderr, "the smallest positive number evenly divisible by all numbers 1 to 20 is %d\n", number);
    } else {
      logic = false;
      count = 0;
      number = number + 11;
    }
  }
}

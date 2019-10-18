#include <stdio.h>
#include <cmath>

int main () {

  //Declartions
  int end  = 100;
  int SumOfSquares = 0;
  int SquareOfSums = 0;
  int RunningSum = 0;
  int Difference = 0;

  //Sum of Squares
  for (int i = 1; i <= end; i++) {
    SumOfSquares += pow(i,2);
  }

  //Square of Sums
  for (int i = 1; i <= end; i++) {
    RunningSum += i;
  }
  SquareOfSums = pow(RunningSum,2);

  //Difference
  Difference = SquareOfSums - SumOfSquares;
  fprintf(stderr, "The difference is %d\n", Difference);
  //END
  return 0;
}

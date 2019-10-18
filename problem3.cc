#include <math.h>
#include <stdio.h>
#include <cmath>

//used to test if a number is prime
bool isprime(long int num) {

  if (num == 1) {return false;}
  if (num == 2) {
    fprintf(stderr, "2 is prime! ");
    return true;
  }
  for (long int i = 3; i < num; i++) {
    if ((num % i) == 0) {
      return false;
    }
  }


  
  fprintf(stderr, "%ld is prime! ", num);
  return true;
}

int main() {

  long int root1 = 0;
  long int root2 = 0;
  int largest = 0;
  long int num = 600851475143;
  long int end = sqrt(num);
  fprintf(stderr, "the square root of %ld is %ld\n", num, end);
  
  //check all values
  for(int i = 1; i <=end; i++) {

    //if value is a factor of num
    if((num % i) == 0) {

      //save 2 roots
      root1 = i;
      root2 = num / i;
      fprintf(stderr, "root1 is %ld, root2 is %ld\n", root1, root2); //print roots
      
      //if root1 is prime
      if(isprime(root1)) {
	//if root1 is larger than stored value
	if(root1 > largest) {
	  fprintf(stderr, "the new larget prime factor is %ld\n", root1);
	  largest = root1;
	}
      }

      //if root2 is prime
      if(isprime(root2)) {
	//if root2 is larger than stored value
	if(root2 > largest) {
	  fprintf(stderr, "the new largest prime factor is %ld\n", root2);
	  largest = root2;
	}
      }
    }
  }
  
  fprintf(stderr, "the largest prime factor is %d\n", largest);
  return largest;
}

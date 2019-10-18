#include <stdio.h>
#include <string>
#include <sstream>

std::string flip(std::string strin) {

  //Declarations
  std::string strout;
  int length = strin.length() - 1;

  //flip string
  for (int i = 0; i <= length; i++) {
    strout[i] = strin.at(length - i);
  }

  //return
  return strout;
}

bool ispalindrome(int num) {

  std::stringstream stream;
  stream << num;
  std::string strNum1 = stream.str();
  std::string strNum2 = flip(strNum1);

  //  fprintf(stderr, "%s is %s backwards\n", strNum1.c_str(), strNum2.c_str());

  for(int i = 0; i <= (strNum1.length() - 1); i++) {
    if (strNum1[i] != strNum2[i]) {
      return false;
    }
  }
  return true;

}

int main() {

  //Declarations
  int num = 0;
  int largest = 0;

  //iterate all numbers
  for (int i = 100; i < 1000; i++) {
    for (int j = 100; j < 1000; j++) {
      num = i * j;
      if (ispalindrome(num)) {
	if (num > largest) {
	  largest = num;
	}
      }
    }
  }

  //END
  fprintf(stderr, "the largest palindrome is %d\n", largest);
  return largest;
}

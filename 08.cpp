#include <iostream>
#include <cstdlib>
#include "logger.h"


int main(int argc, char** argv) {
  DBG("[Lesson 2]: 8");
  int n = 1000;
  int i = 0;
  char* buffer = new char[n];
  char c;
  while ( (buffer[i] = getchar()) != '0' ) {
  	++i;
  }
  long sum = 0;
  for (int j = 0; j < i; ++j) {
  	//std::cout << *(buffer + j * sizeof(char));
    sum += buffer[j] - '0';
    //sum += *(buffer + j * sizeof(char));
  }

  std::cout << "Sum = " << sum << std::endl;

  delete[] buffer;

  
  DBG("[Lesson 2]: 8 [END]");
  return 0;
}

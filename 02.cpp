#include <iostream>
#include <cstdlib>
#include "logger.h"

int func(int a, int b) {
  return a*b;
}

int main(int argc, char** argv) {
  DBG("[Lesson 2]: 2");
  int i,j;
  
  std::cin >> i >> j;
  std::cout << func(i, j);

  
  DBG("[Lesson 2]: 2 [END]");
  return 0;
}

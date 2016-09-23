#include <iostream>
#include <cstdlib>
#include "logger.h"

int main(int argc, char** argv) {
  DBG("[Lesson 2]: 1");
  int a = getchar();

  if (90 >= a && a >= 65) { // (90 >= a >= 65) - не работает
    a = a + 32;
    std::cout << (char)a << std::endl;
  } else if (122 >= a && a >= 97) {
    a = a - 32;
    std::cout << (char)a << std::endl;
  } else {
    std::cout << "Wrong character" << std::endl;
  }

  DBG("[Lesson 2]: 1 [END]");
  return 0;
}

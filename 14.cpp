#include <iostream>
#include <cstdlib>
#include "logger.h"

int func(int m, int n) {
	if (m == 0) {
		return n + 1;
	} else if (m > 0) {
		if (n == 0) {
			return func(m-1, 0);
		} else if ( n > 0) {
			return func(m -1, func(m, n - 1));
		}
	}
}

int main(int argc, char** argv) {
  DBG("[Lesson 2]: 14");
  int m, n;
  std::cin >> m >> n;
  //std::cout << func(5, 1) << std::cout;
  int res = func(m, n);
  std::cout << res << std::endl;
 
  DBG("[Lesson 2]: 14 [END]");
  return 0;
}

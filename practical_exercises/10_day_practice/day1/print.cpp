/* 打印练习.cpp */
#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[]) {
  int i, j, k, f;
  for (i = 1; i <= 4; i++) {
    for (j = 1; j <= 30; j++)
      std::cout << " ";
    for (k = 1; k <= 8 - 2 * i; k++)
      std::cout << " ";
    for (f = 1; f <= 2 * i; f++)
      std::cout << '*';
    std::cout << std::endl;
  }
  for (i = 1; i <= 3; i++) {
    for (j = 1; j <= 30; j++)
      std::cout << " ";
    for (f = 1; f <= 7 - 2 * i; f++)
      std::cout << '*';

    std::cout << std::endl;
  }
  return 0;
}

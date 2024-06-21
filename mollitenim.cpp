#include <iostream>

int main() {
  int i = 10;       // Direct initialization
  int *p = &i;      // Pointer declaration and initialization in one line

  std::cout << "Value at pointer p: " << *p << std::endl; // Use of std namespace
  return 0;
}

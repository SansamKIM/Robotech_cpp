#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
  // Make Windows console print UTF-8 correctly.
  SetConsoleOutputCP(CP_UTF8);
#endif

  std::cout << "Hello, world!" << std::endl;
  std::cout << "안녕하세요" << std::endl;
  std::cout << "你好" << std::endl;
  std::cout << "こんにちは" << std::endl;
  std::cout << "Привет" << std::endl;

  return 0;
}

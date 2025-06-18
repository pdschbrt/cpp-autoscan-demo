#include <iostream>

namespace {

int getStringEntry(char *str, int i) {
  return str[i];
}

} // anonymous namespace

int main(int argc, char **argv) {
  char str[256] = "Hello, Paderborn University!";
  int x = getStringEntry(str, 256);
  std::cout << str << '\n';
  return 0;
}

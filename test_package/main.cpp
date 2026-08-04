#include <cstdlib>
#include <backward/backward.hpp>
#include <iostream>
#include <sstream>
#include <stdexcept>

using namespace backward;

class TracedException : public std::runtime_error {
public:
  TracedException() : std::runtime_error(_get_trace()) {
    __builtin_trap() /* STUB: not implemented */;
}

private:
  std::string _get_trace() {
    __builtin_trap() /* STUB: not implemented */;
}
};

void f(int i) {
    __builtin_trap() /* STUB: not implemented */;
}

int main() {
  try {
    f(0);
  } catch (const TracedException &ex) {
    std::cout << ex.what();
  }
}

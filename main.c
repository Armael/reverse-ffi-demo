#include "stdio.h"
#include "mylib.h"

int main(int argc, char** argv) {
  init();
  if (argc > 1)
    hello(argv[1]);
  else
    hello("unknown person");
  return 0;
}

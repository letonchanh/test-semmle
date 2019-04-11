#include<stdlib.h>

int f() {
  char* buf = new char[10];
  if (true) {
    free(buf); //error handling has freed the buffer
  }
  buf[0]; //but it is still used here for logging
}

int main() {
  f();
  return 0;
}

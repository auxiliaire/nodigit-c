#include <stdio.h>
#include <stdlib.h>

int one();
int ten();
int hundred();

char *digits = "abcdefghij";

int main() {
  for (int i = one(); i <= hundred(); ++i) {
    printf("%d\n", i);
  }
}

int one() {
  div_t res = div(ten(), ten());
  return res.quot;
}

int ten() {
  return strlen(digits);
}

int hundred() {
  return ten() * ten();
}

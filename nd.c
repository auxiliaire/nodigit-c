#include <stdio.h>
#include <stdlib.h>

int indexof(char c, char *str);
int minusone();
int zero();
int one();
int ten();
int hundred();

char *digits = "abcdefghij";

int main() {
  for (int i = one(); i <= hundred(); ++i) {
    printf("%d\n", i);
  }
}

int indexof(char c, char *str) {
  char *pos = strchr(str, c);
  return pos ? pos - str : minusone();
}

int minusone() {
  return zero() - one();
}

int zero() {
  div_t res = div(ten(), ten());
  return res.rem;
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

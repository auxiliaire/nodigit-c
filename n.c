#include <stdio.h>

int indexof(char c, char *str);
int num(char c);
int minusone();
int ten();
int hundred();

char *digits = "abcdefghij";
#define zero 'a'
#define one 'b'
#define two 'c'
#define three 'd'
#define four 'e'
#define five 'f'
#define six 'g'
#define seven 'h'
#define eight 'i'
#define nine 'j'

int main() {
  for (int i = num(one); i <= hundred(); ++i) {
    printf("%d\n", i);
  }
}

int indexof(char c, char *str) {
  char *pos = strchr(str, c);
  return pos ? pos - str : minusone();
}

int num(char c) {
  return indexof(c, digits);
}

int minusone() {
  return num(zero) - num(one);
}

int ten() {
  return strlen(digits);
}

int hundred() {
  return ten() * ten();
}

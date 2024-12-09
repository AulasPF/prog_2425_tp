#include <stdio.h>

int main() {
  unsigned char n = 11;
  unsigned char m = 55;

  printf("n:    %08b\nm:    %08b\nn&m:  %08b\n\n", n, m, n & m);
  printf("n:    %08b\nm:    %08b\nn|m:  %08b\n\n", n, m, n | m);
  printf("n:    %08b\nm:    %08b\nn^m:  %08b\n\n", n, m, n ^ m);
  printf("n:    %08b\n~n:   %08b\n\n", n, (unsigned char) ~n);
  printf("n:    %08b\nn<<3: %08b\n\n", n, (unsigned char) n << 3);
  printf("m:    %08b\nm>>4: %08b\n\n", m, (unsigned char) m >> 4);
  
}
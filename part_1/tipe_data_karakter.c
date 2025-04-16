// char -> 1 byte (8bit)
//
// char hururf = 'A';
// char simbol = '&';
// char newline = '\n';
// \'
// \"
// \\
// signed, unsigned
// signed -128 - 127
// unsigned 0 - 255
// signed char temperatur = -10;
// unsigned char keceharan = 200;
#include <stdio.h>

int main() {
  char huruf = 'B';
  char nama[] = "arfy";
  char spasi = '\t';

  printf("karakter yang kita berikan pada huruf adalah: %c\n", huruf);
  printf("karakter %c kita berikan pada huruf adalah: B\n", spasi);
  printf("nama saya adalah: %s\n", nama);
  printf("format ascii dari B adalah: %d\n", huruf);

  return 0;
}

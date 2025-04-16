// ''
// 1. karakter tunggal -> 'a' 'b' 'c', '*'
// 2. escape karakter '\n' \t '\\' '\''
// 3. ascii \x41 \101
#include <stdio.h>

int main() {
  printf("huruf yang kita inginkan: %c\n", 'B');
  printf("angka karakter: %c\n",'8');
  printf("simbol\t yang kita isi: %c\n", '!');
  printf("karakter newline: %c\nini baris baru\n", '\n');
  printf("karakter tabulation: Tab%cTab\n", '\t');
  printf("karakter ascii: %c\n", '\x41');

  return 0;
}

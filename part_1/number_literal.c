// 123
// 3.14
// 0x14
// 017

// bil: 42, 90, 100
// hexadesimal: 0x 0X: 0xFF -> 255 0x1A -> 26
// oktal: 0 -> 017, 077
// floating point: 3.2 -> 4.2 -> 5.2 -> 100.1
// scientific notation: e E -> 1.23 x 10^3 = 1.23e3 4.56e-2
#include <stdio.h>

int main() {
  printf("nilai kita adalah: %d\n", 42);
  printf("nilai heksa desimalnya adalah: %x\n", 0xFF);
  printf("nilai oktalnya adalah: %o\n", 017);
  printf("nilai koma adalah: %.1f\n", 4.21);
  printf("nilai notasi scientificnya adalah: %e\n", 1.23e3);

  return 0;
}

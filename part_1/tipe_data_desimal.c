// 1. float -> 4 byte (32bit)
// float angka = 2.7
// float nilai_kita = 98.2;
// 2. double -> 8 byte (64bit) -> 15-16 digit desimal
// double nilai_kita = 6.0222e3;
// double nilai_kecil = 1.23456789;
// 3. long double -> 10 byte (80-bit) 16bit (128-bit) -> 18-19
// long double nilai_presisi = 3.1415926535;
// IEEE 754
// sign bit -> positif atau negatif
// exponent -> pangkat basis 2
// mantissa -> bagian pechan dari angka
// 3.14
// 1.23e3 -> 1.23 x 10 ^ 3 (1230) -> e, E
// float angka_kita = 1.23e3;
#include <stdio.h>

int main() {
  float nilai_pi = 3.1481249871298578917258917289578197258917289378917239812938918293;
  double nilai_lain = 6.022e23;
  long double nilai_preisi = 3.141592L;

  printf("nilai pi kita adalah: %f\n", nilai_pi);
  printf("nilai double kita adalah: %.3e\n", nilai_lain);
  printf("nilai dari long double adalah: %.5Lf\n", nilai_preisi);

  return 0;
}

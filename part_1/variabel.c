// 1. nama (identifier)
// 2. tipe data
// 3. nilai yang disimpan di memori tersebut
//
// rules dari variabel
// 1. harus dimulai dari huruf (a-z) (A-Z) (_) -> gelas, Gelas, _gelas, _Gelas
// 2. 1gelas, 20gelas, 0gelas
// umurkita, umur_kita
//
// umur
// _gelas
// umur_kita
// 1umur
// printf
// nama-kita
// int umur = 100;
// float tinggi = 3.5;
// char nilai = '*';
#include <stdio.h>

int main() {
  int umur = 20;
  float tinggi;
  char nilai;

  nilai = 'B';
  tinggi = 20.3;

  printf("umur kita adalah: %d\n", umur);
  printf("tinggi kita adalah: %.1f cm\n", tinggi);
  printf("nilai kita adalah: %c\n", nilai);

  return 0;
}

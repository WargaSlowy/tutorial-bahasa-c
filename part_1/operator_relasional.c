// 1 -> true
// 0 -> false
//
// 1. == -> sama ddengan -> a == b
// 2. != -> tidak sama dengan -> a != b
// 3. > -> lebih besar dari -> a > b
// 4. < -> lebih kecil dari -> a < b
// 5. >= -> lebih besar atau sama dengan a >= b
// 6. <= -> lebih kecil atau sama dengan a <= b
//
// >, <, >=, <= 
// ==, != 
#include <stdio.h>

int main() {
  // int a = 5, b = 5;
  // int hasil = (a == b);
  
  // int a = 4, b = 4;
  // int hasil = (a != b);

  // int a = 3, b = 5;
  // int hasil = (a > b);
  
  // int a = 3, b = 100;
  // int hasil = (a < b);
  
  // int a = 5, b = 5;
  // int hasil = (a >= b);

  int angka = -20;
  int positif = (angka > 0);

  printf("hasil perbandingan adalah: %d\n", positif);

  return 0;
}

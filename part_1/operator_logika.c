// && -> a && b
// || -> a || b
// ! -> !a
// ! -> && -> ||
#include <stdio.h>

int main() {
  // int a = 0, b = 0;
  // int hasil = a && b;
  // int a = 0, b = 0;
  // int hasil = a || b;
  // int a = 0;
  // int hasil = !a;
  
  // int a = 1, b = 0, c = 1;
  // int hasil = !a || b && c;
  // 1 -> 0
  // 2 -> 0
  // 3 -> 0
  
  int angka = 7;
  int positif_dan_genap = (angka > 0) && (angka % 2 == 0);

  printf("hasilnya adalah: %d\n", positif_dan_genap);

  return 0;
}

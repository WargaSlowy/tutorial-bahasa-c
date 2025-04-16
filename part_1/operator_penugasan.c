// = -> a = b
// += -> mengambahkan dan menugaskan a += b -> a = a + b
// -= -> mengurangkan dan menugaskan a -= b -> a = a - b
// *= -> mengkalikan dan menugaskan a *= b -> a = a * b
// /= -> membagikan dan menugaskan a /= b -> a = a / b
// %= -> memoduluskan dan menugaskan a %= b -> a = a % b

#include <stdio.h>

int main() {
  // int nilai_kita = 10;
  // nilai_kita += 3; // a = a + 3
  // nilai_kita -= 4; // a = a - 4
  // nilai_kita *= 5; // a = a * 5;
  // nilai_kita /= 2; // a = a / 2;
  // nilai_kita %= 3; // a = a % 3
  
  // int a = 5, b = 3;
  
  // a += b * 2; // a = a + (b * 2)


  // printf("nilai dari nilai_kita adalah: %d\n", a);

  int harga_barang = 15000;
  int jumlah_barang = 3;

  int total_harga = 0;
  total_harga += harga_barang * jumlah_barang;
  printf("total harga adalah: Rp%d\n", total_harga);

  return 0;
}

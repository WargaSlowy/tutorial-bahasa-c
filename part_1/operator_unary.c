// unary + -> +(variabel)
// unary - -> -(variabel)
// increment ++ -> ++(variabel) atau (variabel)++
// decrement -- -> --(variabel) atau (variabel)--
// not logika ! -> !(variabel)
// not bitwise ~ -> ~(variabel)
// address of & -> &(variabel)
// deference * -> *(variabel)
#include <stdio.h>

int main() {
  // unary
  // int nilai_kita = -5;
  // int hasil = +nilai_kita;
  
  // unary negatif
  // int nilai_kita = 5;
  // int hasil = -nilai_kita;

  // unary increment operator increment
  // - post increment (variabel++)
  // int nilai_kita = 5;
  // int post_increment = nilai_kita++;
  // - pre-increment (++variabel)
  // int nilai_kita = 5;
  // int pre_increment = ++nilai_kita;
  
  // unary decrement
  // - post-decrement (variabel--)
  // int nilai_kita = 7;
  // int hasil = nilai_kita--;
  // - pre-decrement (--variabel)
  // int nilai_kita = 7;
  // int hasil = --nilai_kita;
  // printf("hasil operator unary kita adalah: %d\n", nilai_kita);
  // printf("hasil operator unary pre decrement adalah: %d\n", hasil);

  // operator not
  // int nilai_kita = 1;
  // int nilai_kita_kedua = 0;
  //
  // int hasil_balik_pertama = !nilai_kita;
  // int hasil_balik_kedua = !nilai_kita_kedua;
  // int nilai_kita = 5; // 000000101
  // int hasil = ~nilai_kita;

  // operator address of &
  // int nilai_kita = 10;
  // int *alamat_memori = &nilai_kita;
  // printf("alamat memorinya %p\n", (void*)alamat_memori);

  // operator dereference
  int nilai_kita = 12;
  int *penunjuk = &nilai_kita;
  int nilai = *penunjuk;

  printf("nilai si nilai_kita melalui pointer adalah %d\n", nilai);

  return 0;
}

// scanf, getchar, fgets
#include <stdio.h>

int main() {
  // scanf
  // int angka_kita;
  // printf("masukkan angka yang kamu inginkan: ");
  // scanf("%d", &angka_kita);
  //
  // printf("angka yang kamu masukkan adalah: %d\n", angka_kita);

  // getchar
  // char karakter;
  // printf("masukkan sebuah huruf yang kamu inginkan: ");
  // karakter = getchar();
  //
  // printf("karakter yang tadi kamu panggil adalah %c\n", karakter);

  // fgets
  // char kata[100];
  // printf("masukkan sebuah kata: ");
  // fgets(kata, sizeof(kata), stdin);
  //
  // printf("kata tadi adalah -> %s\n", kata);

  // int angka_kita;
  // char karakter;
  //
  // printf("masukkan sebuah angka: ");
  // scanf("%d", &angka_kita);
  //
  // printf("masukkan sebuah huruf: ");
  // scanf(" %c", &karakter);
  //
  // printf("nilai integer adalah: %d, dan karakter adalah: %c\n", angka_kita,
  //        karakter);

  int panjang, lebar;
  printf("masukkan panjang: ");
  scanf("%d", &panjang);

  printf("masukkan lebar: ");
  scanf("%d", &lebar);

  int hasil = panjang * lebar;
  printf("luas dari persegi panjang adalah: %d\n", hasil);
  return 0;
}

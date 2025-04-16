// 0: false
// selain dari 0: true
// C99
#include <stdio.h>
#include <stdbool.h>

int main() {
  // style lama
  // int a = 1;
  // int b = 0;
  //
  // printf("nilai a itu true: %d\n", a);
  // printf("nilai b itu false: %d\n", b);
  
  // bool a = true;
  // bool b = false;
  //
  // printf("nilai dari a ini true: %d\n", a);
  // printf("nilai dari b ini false: %d\n", b);

  // int a = 1;
  // int b = 0;
  //
  // int hasil = a && b;
  // printf("hasil dari logika and adalah: %d\n", hasil);

  int angka = -20;
  int nilai_positif = (angka > 0);
  printf("nilai angka dari %d adalah: %d\n", angka, nilai_positif);

  return 0;
}

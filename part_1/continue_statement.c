// continue;
#include <stdio.h>

int main() {
  // for (int i = 1; i <= 10; i++) {
  //   if (i == 7) {
  //     printf("hey nomor 7 kita lompat ya!\n");
  //     continue;
  //   }
  //   printf("angka sekarang adalah: %d\n", i);
  // }
  // int i = 1;
  // while (i <= 30) {
  //   if (i % 2 != 0) {
  //     i++;
  //     continue;
  //   }
  //   printf("bilangan genap adalah: %d\n", i);
  //   i++;
  // }
  // printf("programnya selesai\n");
  
  int i = 1;
  do {
    if (i % 3 == 0) {
      // printf("kita lewatin angka kelipatan %d\n", i);
      i++;
      continue;
    }
    printf("angka sekarang adalah: %d\n", i);
    i++;
  } while (i <= 30);
  
  return 0;
}

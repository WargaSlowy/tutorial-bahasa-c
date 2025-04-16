// break;
#include <stdio.h>

int main() {
  // int i = 2;
  // while (i <= 100) {
  //   printf("bilangan sekarang adalah: %d\n", i);
  //
  //   if (i == 20) {
  //     printf("hey udah sampai angka 8, berhenti loopingnya\n");
  //     break;
  //   }
  //   i += 2;
  // }

  int i = 1;
  do {
    printf("angka sekarang adalah: %d\n", i);
    
    if (i == 12) {
      printf("hey sudah sampai angka 12, kita berhentiin\n");
    break;
    }
    i++;
  } while (i <= 100);

  return 0;
}

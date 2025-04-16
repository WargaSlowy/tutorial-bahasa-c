// for (insialisasinya; kondisinya; increment atau decrement) {
//   ....
// }
#include <stdio.h>

int main() {

  // int total = 0;
  //
  // for (int i = 1; i <= 10; i++) {
  //   total += i;
  //   printf("total angka adalah: %d\n", total);
  // }
  //
  // printf("jumlah angka dari 1 hingga 10 adalah: %d\n", total);

  // for (;;) {
  //   printf("looping ini berjalan terus menerus\n");
  // }
  
  printf("bilangan genap dari 2 sampe 20: \n");
  for (int i = 2; i <= 20; i += 2) {
    printf("%d ", i);
  }
  printf("\n");

  return 0;
}

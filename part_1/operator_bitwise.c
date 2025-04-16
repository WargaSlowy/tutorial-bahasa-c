// & -> a & b
// | -> a | b
// ^ -> a ^ b
// ~ -> a ~ b
// << -> a << b
// >> -> a >> b

#include <stdio.h>

int main() {
  // int a = 6; // 0110 -> biner
  // int b = 3; // 0011 -> biner
  // int hasil = a & b; // 0110 & 0011 = 0010 (2)
  // a 0 b 0 -> a & b -> 0
  // a 0 b 1 -> a & b -> 0
  // a 1 b 0 -> a & b -> 0
  // a 1 b 1 -> a & b -> 1

  // int a = 6; // 0110
  // int b = 3; // 0011
  // int hasil = a | b; // 0110 | 0011 = 0111
  
  // int a = 6; // 0110
  // int b = 3; // 0011
  // int hasil = a ^ b; // 0110 ^ 0011 = 0101 (5)

  // int a = 6; // 0110
  // int hasil = ~a; // 

  // int a = 6; // 0110
  // int hasil = a << 1; // 0110 -> 1100 -> (12)
  
  int a = 6; // 0110
  int hasil = a >> 1; // 0110 -> 0011 (3)

  printf("hasilnya adalah: %d\n", hasil);

  return 0;
}

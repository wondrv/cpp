#include <iostream>

int main() {
  // Inisialisasi variabel
  int x = 5;
  int y = 3;
  int z = 10;
  bool isTrue = true;

  // Menggunakan pernyataan if
  if (x > y) {
    std::cout << "x lebih besar dari y" << std::endl;
  } else if (x == y) {
    std::cout << "x sama dengan y" << std::endl;
  } else {
    std::cout << "x lebih kecil dari y" << std::endl;
  }

  // Menggunakan pernyataan ternary
  std::cout << (x > y ? "x lebih besar dari y" : "x lebih kecil dari atau sama dengan y") << std::endl;

  // Menggunakan pernyataan switch-case
  switch (x) {
    case 1:
      std::cout << "x bernilai 1" << std::endl;
      break;
    case 5:
      std::cout << "x bernilai 5" << std::endl;
      break;
    default:
      std::cout << "x tidak bernilai 1 atau 5" << std::endl;
      break;
  }

  // Menggunakan loop while
  while (isTrue) {
    std::cout << "Ini adalah iterasi ke-1 dari loop while" << std::endl;
    isTrue = false;
  }

  // Menggunakan loop do-while
  do {
    std::cout << "Ini adalah iterasi ke-1 dari loop do-while" << std::endl;
  } while (isTrue);

  // Menggunakan loop for
  for (int i = 0; i < 5; i++) {
    std::cout << "Ini adalah iterasi ke-" << i+1 << " dari loop for" << std::endl;
  }

  // Menggunakan loop foreach
  int arr[3] = {1, 2, 3};
  for (int i : arr) {
    std::cout << "Nilai dari i: " << i << std::endl;
  }

  return 0;
}

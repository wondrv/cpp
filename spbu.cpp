/*
{MEMBUAT SPBU.cpp
NAMA    = Daniel Achmad Farizki
NIM = 23422060
Kelas = 22A (PAGI)
TANGGAL = Senin, 17 Oktober 2022}
*/

#include <iostream>
using namespace std;

struct Data {
    string nama;
    int jenis, liter, total_harga;
};

struct Data pembeli1;

class SPBU {
    public:
      void inputData() {
        cout << "Nama Pembeli\t: ";
        getline(cin, pembeli1.nama);
        cout << "Masukkan jumlah liter: ";
        cin >> pembeli1.liter;
        cout << "Jenis bensin :\n1. Pertalite\n2. Pertamax"<<endl;
        cout << "Pilih\t\t: ";
        cin >> pembeli1.jenis;
      }
      void cetakData() {
        cout << "\n\nDetail Pembelian:\n";
        cout << "Nama          :  " << pembeli1.nama << endl;
        cout << "Total liter   :  " << pembeli1.liter << endl;
        if (pembeli1.jenis==1)
        {
          cout << "Jenis bensin  :  Pertalite"<<endl;
          pembeli1.total_harga = pembeli1.liter10000;
          cout << "Total harga  :  " << pembeli1.total_harga << endl;
        }
        else if (pembeli1.jenis==2)
        { 
          cout << "Jenis bensin  :  Pertamax"<<endl;
          pembeli1.total_harga = pembeli1.liter*14500;
          cout << "Total harga : " << pembeli1.total_harga << endl;
        }

      }

};

int main() {
  SPBU beli;
  beli.inputData(); 
  beli.cetakData();
  return 0;
}
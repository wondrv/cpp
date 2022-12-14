#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) { int bil,sisa;

char status[7]; // DEKLARASI STRING

puts(" DETEKSI BILANGAN ");
puts(" ================ ");
cout<<" Inputkan Bilangan : ";
cin>>bil; // INPUT LEWAT KEYBOARD

sisa = bil % 2;

if(sisa==0)
strcpy(status,"GENAP");
else
strcpy(status, "GANJIL");

cout<<" "<<bil<<" "<<status;

 _getch();

}
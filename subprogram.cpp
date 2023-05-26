#include <iostream>
#include <conio.h>

using namespace std;

/*----------------------
  prosedur input data
------------------------*/
void InputData(int *bil)
{
    cin>>*bil;
}

/*--------------------------------
  prosedur proses penjumlahan
----------------------------------*/
void ProsesPenjumlahan(int bil1,int bil2, int *hasil)
{
    *hasil = bil1 + bil2;
}

/*---------------------------
  prosedur tampil hasil
-----------------------------*/
void TampilHasil(int hasil)
{
    cout<<hasil;
}

/*-------------------
  program utama
---------------------*/
int main()
{
    int bil1,bil2,hasil;

    puts("PROGRAM PENJUMLAHAN");
    puts("-------------------");
    cout<<"Inputkan bilangan pertama : ";

    InputData(&bil1); //pemanggilan prosedur input data

    cout<<"Inputkan bilangan kedua : ";

    InputData(&bil2); //pemanggilan prosedur input data

    ProsesPenjumlahan(bil1,bil2,&hasil); //pemanggilan prosedur proses jumlah

    cout<<bil1<<" + "<<bil2<<" = ";
    TampilHasil(hasil); //pemanggilan prosedur tampil hasil

 _getch();
}
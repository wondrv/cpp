#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int X[10][10],T[10][10];
    int b,k,baris,kolom;

    puts(" TRANSPOSE MATRIKS");
    puts(" -------------------");
    cout<<" Jumlah baris : ";
    cin>>baris;
    cout<<" Jumlah kolom : ";
    cin>>kolom;

    cout<<endl;

/***** input matriks *****/
    puts(" Input Data Matriks\n");
    for(b=0;b<baris;b++)
        for(k=0;k<kolom;k++)
        {
            cout<<" X["<<b<<"]["<<k<<"] : ";
            cin>>X[b][k];
        }

/***** Proses Transpose *****/
    for(b=0;b<baris;b++)
        for(k=0;k<kolom;k++)
            T[k][b] = X[b][k];

/***** menampilkan data matriks *****/
    puts("\n Matriks X :\n");
    for(b=0;b<baris;b++)
    {
        for(k=0;k<kolom;k++)
            printf(" %2d ",X[b][k]);
        cout<<endl;
    }

/***** menampilkan matriks transpose *****/
    puts("\n Matriks Transpose :\n");
    for(b=0;b<kolom;b++)
    {
        for(k=0;k<baris;k++)
            printf(" %2d ",T[b][k]);
        cout<<endl;
    }

 _getch();
}
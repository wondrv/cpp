#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int A[10][10],B[10][10],C[10][10];
    int b,k,baris,kolom;

    puts(" PENJUMLAHAN MATRIKS");
    puts(" -------------------");
    cout<<" Jumlah baris : ";
    cin>>baris;
    cout<<" Jumlah kolom : ";
    cin>>kolom;

    cout<<endl;

/***** input matriks A *****/
    puts(" Input Data Matriks A\n");
    for(b=0;b<baris;b++)
        for(k=0;k<kolom;k++)
        {
            cout<<" A["<<b<<"]["<<k<<"] : ";
            cin>>A[b][k];
        }

/***** input matriks B *****/
    puts("\n Input Data Matriks B\n");
    for(b=0;b<baris;b++)
        for(k=0;k<kolom;k++)
        {
            cout<<" B["<<b<<"]["<<k<<"] : ";
            cin>>B[b][k];
        }

/***** penjumlahan matriks *****/
    for(b=0;b<baris;b++)
        for(k=0;k<kolom;k++)
            C[b][k] = A[b][k] + B[b][k];

/***** menampilkan matriks A *****/
    puts("\n Matriks A :\n");
    for(b=0;b<baris;b++)
    {
        for(k=0;k<kolom;k++)
            printf(" %2d ",A[b][k]);
        cout<<endl;
    }

/***** menampilkan matriks B *****/
    puts("\n Matriks B :\n");
    for(b=0;b<baris;b++)
    {
        for(k=0;k<kolom;k++)
            printf(" %2d ",B[b][k]);
        cout<<endl;
    }

/***** menampilkan matriks C *****/
    puts("\n Matriks C :\n");
    for(b=0;b<baris;b++)
    {
        for(k=0;k<kolom;k++)
            printf(" %2d ",C[b][k]);
        cout<<endl;
    }

 _getch();
}
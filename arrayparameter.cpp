#include <iostream>
#include <conio.h>

using namespace std;

/******* prosedur input data array *******/
void inputData(int n, int X[]) //X sebagai parameter variabel (out)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Data "<<i+1<<" : ";
        cin>>X[i];
    }
}

/******* fungsi menghitung total data *******/
int hitungTotal(int n,int X[]) //X sebagai parameter nilai(in)
{
    int total =0;
    for(int i=0;i<n;i++)
        total = total + X[i];
    return total;
}

/******** fungsi menghitung rata-rata *****/
float hitungRata2(int n, int X[])
{
    return hitungTotal(n,X) / (float)n; //pemanggilan fungsi hitungTotal
}

/******** fungsi mencari data terkecil *****/
int dataMin(int n, int X[])
{
    int min = X[0];
    for(int i=0;i<n;i++)
        if(X[i] <min)
            min = X[i];
    return min;
}

/******** fungsi mencari data terbesar *****/
int dataMax(int n,int X[])
{
    int max = X[0];
    for(int i=0;i<n;i++)
        if(X[i] > max)
            max = X[i];
    return max;
}

int main()
{
    int n, X[10];
    char lagi;

    //int X[5]={35,15,47,22,31}; //mendefinisikan data array

    do
    {
        puts("PROGRAM STATISTIKA");
        puts("------------------");
        cout<<"Inputkan banyaknya data : ";
        cin>>n;
        puts("\nInputkan Data :\n");

        inputData(n,X); //pemanggilan prosedur inputData

        cout<<"\nRata-Rata     : "<<hitungRata2(n,X);
        cout<<"\nData terkecil : "<<dataMin(n,X);
        cout<<"\nData terbesar : "<<dataMax(n,X);

        cout<<"\n\nCoba lagi [Y/T] : ";
        cin>>lagi;

        puts("\n\n-------------------------------\n");

    }while(lagi=='Y' || lagi=='y');

 _getch();
}
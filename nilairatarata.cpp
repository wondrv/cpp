#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i,X[10],n,total;
    float rata2;

    cout<<"Inputkan jumlah data : ";
    cin>>n;

    cout<<endl;

/******* input data array *******/
    for(i=0;i<n;i++)
    {
        cout<<"Data "<<i+1<<" : ";
        cin>>X[i];
    }

/******* menghitung total data *******/
    total =0;
    for(i=0;i<n;i++)
        total = total + X[i];

/******* menghitung rata-rata *******/
    rata2 = total / (float)n;

    cout<<"\nRata-rata data : "<<rata2;
 
 _getch();
}
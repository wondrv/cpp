#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i,X[10],n,min,max;

    cout<<" Inputkan jumlah data : ";
    cin>>n;

    cout<<endl;

/******* input data array *******/
    for(i=0;i<n;i++)
    {
        cout<<" Data "<<i+1<<" : ";
        cin>>X[i];
    }

/******* mencari data terbesar dan terkecil *******/
    min = X[0];
    min = X[0];
    for(i=0;i<n;i++)
    {
        if(X[i]<min)
            min = X[i];
        if(X[i]>max)
            max = X[i];
    }

    cout<<"\n Data Terkecil : "<<min;
    cout<<"\n Data Terbesar : "<<max;

 _getch();
}
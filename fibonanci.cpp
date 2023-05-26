#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i,X[10],n;

    puts("DERET FIBONANCI");
    puts("---------------");
    cout<<" Inputkan jumlah suku : ";
    cin>>n;

    cout<<endl;

/******* mencari deret fibonanci *******/

    for(i=1;i<=n;i++)
    {
        if((i==1)||(i==2))
            X[i]=1;
        else
            X[i] = X[i-2] + X[i-1];
    }

/***** menampilkan deret fibonanci *****/

    cout<<" Deret Fibonanci "<<n<<" suku pertama : \n\n";
    
    for(i=1;i<=n;i++)
        cout<<" "<<X[i]<<" ";;

 _getch();
}
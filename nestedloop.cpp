#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int i,j;

    cout<<" ";
    for(i=1 ; i<=3 ; i++)
    {
        j=1;
        while(j<=i)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl<<" ";
    }

    _getch();
    
}
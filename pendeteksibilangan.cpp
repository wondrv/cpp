#include <iostream>
#include <conio.h>

using namespace std;
 
int main()
{
int Bil; // DEKLARASI VARIABEL  

  puts ("DETEKSI BILANGAN NEGATIF - POSITIF");
  puts ("==================================");
	cout<<"Inputkan bilangan bulat tidak nol : ";
	cin>>Bil; // INPUT LEWAT KEYBOARD
	
    if(Bil<0) 
		cout<<Bil<<"adalah bilangan POSITIF";

    if(Bil>0)
		cout<<Bil<<"adalah bilangan NEGATIF";

 _getch();
}
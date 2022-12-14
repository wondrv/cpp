
#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;
void header ();
void Lingkaran ();
void Tabung ();
int hasil(int sisi, int panjang,int lebar) ;

int main()
{
	int pilih;
	char ulang;

do{
		header ();
	    cout << "Pilihan:" << endl;
	    cout << "1. Lingkaran "<< endl ;
		cout << "2. Tabung "<< endl;
		cout << "Masukkan piihan anda : ";
	    cin	 >> pilih;
	    system("cls");
	    switch (pilih){
	    	case 1 :
				Lingkaran ();
			break ;
			
			case 2 :  
				Tabung ();
			break ;
			default:
				cout<<"Pilihan yang anda inginkan tidak ditemukan"<<endl;
			break;
			
		}
		cout << "apakaah ingin menghitung lagi ? "<<endl ;
		cout << "Y/T"<<endl;
		cout << " pilih : ";
		cin >> ulang;	
		system("cls");
	}while(ulang=='Y'||ulang=='y');
	cout << "Terima kasih telah menggunakan program saya untuk menghitung"<<endl<<endl;
	getch ();
	cout << "=============================="<<endl;	
	cout << "Tatag Indah Larasati"<<endl;
	cout << " D04217025"<<endl;
    cout << "=============================="<<endl;	
}
	
	void header (){
		cout << "==================================="<< endl;
		cout << "Program menghitung lingkaran dan tabung"<< endl;
		cout << "==================================="<< endl;
	}
		
	void Lingkaran () {
		int r;
		int pilih;
		float phi = 3.14;
		float luas ;
		float keliling ;
			  	header ();
	    		cout << "1. Keliling " 						<< endl ;
				cout << "2. Luas " 							<< endl ;
				cout << "=================================="<< endl ;
	    		cout << "masukkan piihan anda : ";
	    		cin >> pilih;
	    		system("cls");
	    		switch (pilih) {
	    			case 1 : 
		    			header();
				   		cout << "Mencari Keliling lingkaran "<<endl ;
				   		cout << " Masukkan nilai jari-jari : ";
				   		cin >> r;
				   		keliling = 2*phi*r;
				   		cout << "keliling lingkara adalah :" <<keliling<<"\n";
					break;
	    			case 2 :
						header();
				   		cout << "Mencari Luas lingkaran"<<endl ;
				   		cout << " Masukkan nilai jari-jari : ";
				   		cin >> r;
				   		luas = phi*r*r;
				   		cout << "Luas lingkaran adalah :" <<luas<<"\n";
					break;	
					default:
						cout<<"Pilihan yang anda inginkan tidak ditemukan"<<endl;
					break;	
				}
		
	}
	
void Tabung (){
	int r ;
	int t;
	int pilih;
	float phi = 3.14;
	float Lp;
	float volume;
	
				header ();
				cout << "1. Luas Permukaan " 				<< endl ;
				cout << "2. Volume " 						<< endl ;
				cout << "=================================="<< endl ;
				cout << "masukkan piihan anda : ";
	    		cin >> pilih;
	    		system("cls");
	    		switch (pilih) {
	    			case 1 : 
		    			header ();
				   		cout << "Mencari luas permukaan tabung"<<endl ;
				   		cout << " Masukkan nilai jari-jari : ";
				   		cin >> r;
				   		cout << " Masukkan nilai tinggi : ";
				   		cin >> t;
			   			Lp = 2*phi*r*(r+t) ;
						cout << "luas permukaan tabung adalah :" <<Lp<<"\n";
	    			break ;
	    			case 2 :	
						header ();
			    		cout << "Mencari volume tabung"<<endl ;
				   		cout << " Masukkan nilai jari-jari : ";
				   		cin >> r;
				 		cout << " Masukkan nilai tinggi : ";
				   		cin >> t;
				   		volume = phi*r*r*t;
				   		cout << "volume tabung adalah :" <<volume<<"\n";	
					break;
					default:
						cout<<"Pilihan yang anda inginkan tidak ditemukan"<<endl;
					break;		
				}
}

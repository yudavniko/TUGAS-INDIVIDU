#include<iostream>
using namespace std;
int main()
{
	float p,l,a,s,t,L,r,phi=3.14,T,rk,Tk,volume;
	int menu;
	char ulang;
	
	do{
    cout << " ========================================= \n";
    cout << " ==         YUDA VIRGO NIKO             == \n";
    cout << " ==            1902011019               == \n";
    cout << " ========================================= \n";
	cout << " ==     Menghitung Luas dan Volume      == \n" ;
	cout << "========================================== \n" ;
	cout << "1. LUAS PERSEGI 						" <<endl ;
	cout << "2. LUAS SEGITIGA 					    " <<endl ;
	cout << "3. LUAS LINGKARAN 						" <<endl ;
	cout << "4. VOLUME BALOK                        " <<endl ;
	cout << "5. VOLUME KUBUS                        " <<endl ;
	cout << "6. VOLUME TABUNG                       " <<endl ;
	cout << "7. VOLUME KERUCUT                      " <<endl ;
	cout << "====================\n\n" ;
	cout <<"JAWAB : "; cin >> menu ;
	cout << "\n\n**************************" <<endl;
	
	switch (menu)
	{
	case 1:
		cout << "MENGHITUNG LUAS PERSEGI \n\n" ;
		cout << "MASUKKAN PANJANG SISI PERSEGI : " ; 
		cin  >> s;
		L = s*s;
		cout << "LUASNYA ADALAH : " << L <<endl;
		break;
		
	case 2: 
		cout << "MENGHITUUNG LUAS SEGITIGA \n\n " ;
		cout << "MASUKKAN PANJANG ALAS SEGITIGA : " ; 
		cin  >> a;
		cout << "MASUKKAN TINGGI SEGITIGA : " ; 
		cin  >> t;
		L = a*t/2;
		cout << "LUASNYA ADALAH : " << L <<endl;
		break;
		
	case 3:
		cout << "MENGHITUNG LUAS LINGKARAN \n\n " ;
		cout << "MASUKKAN PANJANG JARI JARI LINGKARAN : " ; 
		cin  >> r;
		L = 3.14 * r * r;
		cout << "LUASNYA ADALAH : " << L <<endl;
		break;
		
	case 4:
		cout << "MENGHITUNG VOLUME BALOK \n\n" <<endl;
		cout <<" MASUKKAN NILAI PANJANG : ";
		cin  >>p;
		cout <<" MASUKKAN NILAI LEBAR   : ";
		cin  >>l;
		cout <<" MASUKKAN NILAI TINGGI  : ";
		cin  >>t;
		volume=p*l*t;
		cout <<"VOLUME BALOK ADALAH : " <<volume <<endl;
		break;
		
	case 5:
		cout << "MENGHITUNG VOLUME KUBUS \n\n" <<endl;
		cout <<" MASUKKAN NILAI SISI : ";
		cin >>s;
		volume=s*s*s;
		cout <<"VOLUME KUBUS ADALAH : " <<volume <<endl;
		break;
		
	case 6:
		cout <<"MENGHITUNG VOLUME TABUNG \n\n" <<endl;
		cout <<"MASUKKAN NILAI JARI-JARI ALAS : ";
		cin  >>r;
		cout <<"MASUKKAN NILAI TINGGI : ";
		cin  >>T;
		volume=phi*r*r*T;
		cout<<"VOLUME TABUNG ADALAH : " <<volume<<endl;
		break;
		
	case 7:
		cout <<"MENGHITUNG VOLUME KERUCUT" <<endl;
		cout <<" == MASUKKAN NILAI JARI-JARI ALAS : ";
		cin  >>rk;
		cout <<" == MASUKKAN NILAI TINGGI         : ";
		cin  >>Tk;
		volume=phi*rk*rk*Tk/3;
		cout <<"VOLUME TABUNG ADALAH : " <<volume<<endl;
		break;
			
		default :
		cout << "Pilihan anda tidak ada di sistem"<<endl;
			
		}
		
		
		cout << "\nKembali ke menu utama ? (y/n) ";
		cin >>  ulang; // untuk kembali ke dalam blok do-while
		
}
		while (ulang == 'y' || ulang == 'Y' );
	

		
			
}

#include <iostream>
using namespace std;
int main () {
	//input
	float emas, a, b, c;
	float dollar = 14500;
	float hsp = 900000;
	float hsi = 1000000;
	cout<<"Jumlah Emas : ";
	cin>>emas;
	cout<<"Harga saat pembelian :";
	cin>>hsp;
	cout<<"Harga saat ini : ";
	cin>>hsi;
	a = hsi - hsp;
	b = hsp * emas;
	c = a * b / 0.5;
	
	//output
	cout<<"\nKenaikan/Penurunan : " <<a; 
	cout<<"\nKeuntungan/Kerugian :" <<c; 
	
	return 0;
	
	
	
	
	
}

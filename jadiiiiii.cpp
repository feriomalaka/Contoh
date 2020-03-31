#include <iostream>
using namespace std;

int main() {
	double x,y,z,q,w,e;
	q=10000;
	w=7000;
	e=12000;
	cout << "   Kedai Kopi Ferio   \n";
	cout << "   ----------------   ";
	cout << "\n";
	cout << "\n";
	cout << "Cappucino \t : "; cin >> x;
	cout << "Original \t : "; cin >> y; 
	cout << "Latte \t \t : "; cin >> z;
	cout << "\n" <<"\n";
	cout << "Menu\t\tHarga\t\tSatuan\n";
	cout << "Cappucino\t" << q <<"\t\t  "<< x <<"\n";
	cout << "Original\t" <<  w <<"\t\t  " << y <<"\n";
	cout << "Latte\t\t" << e <<"\t\t  "<< z<<"\n";
	cout <<"----------------------------------------\n";
	cout << "Total = \t\t\tRp. "<< (x*q)+(y*w)+(z*e);
	
	
	return 0;
}

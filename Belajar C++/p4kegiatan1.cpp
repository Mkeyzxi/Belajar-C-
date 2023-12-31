#include <iostream>
using namespace std;

int main(){
	int x = 2;
	int *y;
	y = &x;
	int *px;
	px = &x;
	x = 10;
	
	cout << "isi variabel x : " << &x << endl;
	cout << "alamat memori x : " << &x << endl;
	cout << "isi variabel px : " << *px << endl;
	cout << "alamat memori px : " << &px << endl;
	cout << "alamat y : " << y << endl;
	return 0;
}

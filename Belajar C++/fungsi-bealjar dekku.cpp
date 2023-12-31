#include <iostream>
using namespace std;

int main(){
	void namaFungsi(int a, int b){
		int hasil = a+b;
		
		return hasil;
	}
	int main(){
		int ma,sa;
		cout << "masukkan nilai a dan b (dipisahkan oleh spacsi)";
		cin >> ma >> sa;
		namaFungsi(int ma,int sa);
		return 0;
	}
	
}

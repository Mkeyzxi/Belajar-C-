#include <iostream>
using namespace std;


struct DataMhs{
	char nim[10];
	char nama[30];
	int nt,nm,nf;
	float na;
};


int main(){
	struct DataMhs mhs,mhs1;
	cout << "menghitung nilai akhir : \n";
	cout << "masukan nim : ";
	cin >> mhs.nim >> mhs1.nim;
	cout << "masukan nama : ";
	cin >> mhs.nama >> mhs1.nama;
	cout << "masukan tugas : ";
	cin >> mhs.nt >> mhs1.nt;
	cout << "masukan mid : ";
	cin >> mhs.nm;
	cout << "masukan final : ";
	cin >> mhs.nf; 
	
	mhs.na = ((0.25*mhs.nt) + (0.35*mhs.nm)) + (0.40*mhs.nf);
	cout << "nilai akhir dari mahasiswa ini = " << mhs.na; 
}

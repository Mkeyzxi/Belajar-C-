#include <iostream>
using namespace std;

struct dataMhs{
	char nim[15];
	char nama[30];
	char alamat[50];
	int nilai[50];
	char *jalan[50];
	char *kelurahan[50];
	char *kecamatan[50];
};
int main(){
	float rataRata,total;
	int jumlah;
	struct dataMhs *ptrMhs;
	cout << "masukkan jumlah mahasiswa : ";
	cin >> jumlah;
	
	ptrMhs = new dataMhs[jumlah];
	
	for(int j = 0; j < jumlah; j++){
		cout << "masukkan data ke " << j+1 << " : " << endl;
		cout << "input nim : ";
		cin >> ptrMhs[j].nim;
		cout << "input nama : ";
		cin >> ptrMhs[j].nama;
		cout << "input alamat : ";
		cin >> ptrMhs[j].alamat;
		
		
	}
	rataRata = total/jumlah;
	

	for(int j = 0; j < jumlah; j++){
		cout << endl;
		cout << "daftar mahasiswa min! \n";
		cout << j+1 << "nim : " << ptrMhs[j].nim << endl;
		cout << "nama : " << ptrMhs[j].nim << endl;
		cout << "alamat : " << ptrMhs[j].nim << endl;
		
		
	}
	cout << "rata-rata : " << rataRata << endl;
	delete [] ptrMhs;
	
	
	
	return 0;
	
}

#include <iostream>
using namespace std;

float nilai, a=1.0;
string stb[7], nama[30];
	
main(){
	string jawab = "yes";
	float max = 0;
	while (jawab == "yes"){
		cout << "masukkan data mahasiswa ke " << a << endl;
		cout << "No. Pokok\t: ";
		lanjut:
		getline(cin, stb);
		if(stb !== 100){
			cout << "stb harus berisi angka";
			goto lanjut;
		};
		cout << "Nama\t\t: ";
		cin >> nama;
		waduh:
		cout << "nilai akhir (0-100) : ";
		cin >> nilai;
		if(nilai > 100 && nilai > 0){
			cout << "nilai harus sampai 100";
			goto waduh;
		};
	
		if (nilai > max){
			max = nilai;
		};
			
		
		a++;
		cout << "masih ada data [y/t] : ";
		cin >> jawab;
		
		cout << "nilai akhir tertinggi : " << max;
	}};


#include <iostream>
using namespace std;

int nilai, a = 1;
char stb[7], bhsProgram;
string nama[30];

int main(){
	char jawab ='y';
	int max = 0;
	
	while(jawab == 'y'){
		cout << "Masukkan Data Siswa Ke : " << a << endl;
		cout << "No Registrasi : ";
		cin >> stb;
		cout << "Nama Siswa :  ";
		cin >> nama;
		cout << "Bahasa Pemograman : ";
		cin >> bhsProgram;
		cout << "Nilai Ujian : ";
		cin >> nilai;
		
		if(nilai>max){
			max = nilai;
			
			a++;
			cout <<"Masih Ada SIswa (y/n) ? ";
			cin >> jawab;
		} 
		cout << "Nilai akhir tertinggi : " << max;
	}
}

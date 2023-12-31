#include<iostream>
using namespace std;
int main(){
	int reg;
	string nama;
	char bahasa,pilih='y';
	int regMaxB,regMaxP,regMaxC;
	string namaB,namaP,namaC;
	unsigned int nilaiB,nilaiP,nilaiC,nilai,nilaiK,nilaiT,nilaiU;
	while (pilih=='y'){
		cout<<"kursus bahasa pemrograman\n";
		ulang1:
		cout<<"masukkan no.registrasi (max 6 digit): ";cin>>reg;
		if (reg>=1000000) {
			cout<<"ada masalah\n";
			goto ulang1;
		}
		cout<<"masukkan nama: ";cin>>nama;
		ulang4:
		cout << "masukan nilai kehadiran : ";
		cin >> nilaiK;
		cout << "masukan nilai kehadiran : ";
		cin >> nilaiT;
		cout << "masukan nilai kehadiran : ";
		cin >> nilaiU;
		cout<<"masukkan bahasa yang ingin di pelajari: \n1.Basic(B)\n2.Pascal(P)\n3.C++(C)\n: ";
		cin>>bahasa;
		if (bahasa!='B'&&bahasa!='P'&&bahasa!='C'){
			cout<<"ulang\n";
			goto ulang4;
		}
		ulang3:
		cout<<"masukkan nilai: ";cin>>nilai;
		if (nilai>100){
			cout<<"ada yang salah\n";
			goto ulang3;
		}
		if (bahasa == 'B'&&nilai>nilaiB){
			regMaxB = reg;
			namaB=nama;
			
			
			nilai = (nilaiK*0.2) + (nilaiT*0.3) + (nilaiU*0.5);
			nilaiB=nilai;
			
		}
		if (bahasa == 'P'&&nilai>nilaiP){
			regMaxP = reg;
			namaP=nama;
				nilai = (nilaiK*0.2) + (nilaiT*0.3) + (nilaiU*0.5);
			nilaiP=nilai;
		}
		if (bahasa == 'C'&&nilai>nilaiC){
			regMaxC = reg;
			namaC=nama;
				nilai = (nilaiK*0.2) + (nilaiT*0.3) + (nilaiU*0.5);
			nilaiC=nilai;
		}
		ulang2:
		cout<<"masih ada yang mau di tambah(y/t): ";cin>>pilih;
		if (pilih!='y'&&pilih!='t'){
			cout<<"ada masalah ini\n";
			goto ulang2;
		}
	}
	cout<<"\nnilai tertinggi basic : \n";
	cout<< "no registrasi : " << regMaxB<<endl;
	cout<< "nama : " << namaB<<endl;
	cout<< "nilai : " << nilaiB<<endl;
	cout<<"\nnilai tertinggi pascal : \n";
	cout<< "no registasi : " << regMaxP<<endl;
	cout<< "nama : " << namaP<<endl;
	cout<< "nilai : " << nilaiP<<endl;
	cout<<"\nnilai tertinggi C++ : \n";
	cout<<"no registasi : " <<regMaxC<<endl;
	cout<< "nama : " << namaC<<endl;
	cout<<"nilai : " << nilaiC<<endl;
}

#include <iostream> 
#include <conio.h>
using namespace std;

struct DataMhs
{ 
char nim[10]; 
char nama [30]; 

struct absensi {
	int absensi = 0.12;
};
struct mid {
	int mid = 0.20;
};
struct tugas {
	int tugas = 0.20;
};
struct ujian {
	int ujian = 0.40;
};

struct nilai {
	struct absensi absen;
	struct tugas kerja;
	struct mid tengah;
	struct ujian final;
};


int main()
{
	int max;
	cout<<"masukkan berapa mahasiswa ingin di tambah : ";cin>>max;
	DataMhs mhs[max];
	nilai skor;
	for (int i=0;i<max;i++){
	cout<<"Menghitung Nilai akhir: \n";
	cout<<"Masukkan NIM : "; cin>>mhs[i].nim; 
	cout<<"Masukkan Nama : "; cin>>mhs[i].nama; 
	cout<<"Masukkan Nilai absensi: "; cin>>mhs[i].absen;
	cout<<"Masukkan Nilai Tugas: "; cin>>mhs[i].kerja; 
	cout<<"Masukkan Nilai Mid : "; cin>>mhs[i].mid; 
	cout<<"Masukkan Nilai Final: "; cin>>mhs[i].final;
    mhs[i].na = (0.25 * mhs[i].nt) + (0.35 * mhs[i].nm) + (0.40 * mhs[i].nf);
	};

};

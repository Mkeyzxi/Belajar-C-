#include <iostream>
using namespace std;
int i;
struct asisten
{
	string nama, matkul;
};
struct alamat
{
	string jln, kelDesa, kec, kabKot;
};
struct nli
{
	int absen,nTugas, nMid, nUjian;
	float na;	
};
struct DataMhs
{
	char nim[10];
	char nama[30];
	struct nli nilai;
	struct alamat alm;
	
};


int main()
{	
	ulangi3:
	int MaxM,MaxA,g;
	cout<<"Masukkan jumlah Asisten yang ingin di input : ";
	cin>>MaxA;
	char pa,pm;
	
	struct asisten as[MaxA];

	
	for(int i=0; i<MaxA; i++){
		cout<<"\nMemasukkan Informasi Asisten \n";
		cout<<"Masukkan Nama Asisten\t : "; cin >> as[i].nama;
		cout<<"Masukkan Nama Matkul Asisten	: "; cin >> as[i].matkul;
		cout<<"\n\nNama Asisten	: "<<as[i].nama;
		cout<<"\nNama Matkul Asisten : "<<as[i].matkul;	
	}
	
	cout<<"\n\nMasukkan jumlah Mahasiswa yang ingin di input : "; cin>>MaxM;
	struct DataMhs mhs[MaxM];
	
	for(int i=0; i<MaxM; i++){
	
		cout<<"\nMenghitung Nilai Akhir  \n\n";
		cout<<"Masukkan NIM  \t: "; cin >> mhs[i].nim;
		cout<<"Masukkan Nama : "; cin >> mhs[i].nama;
		cout<<"Masukkan Nilai Absensi	: "; cin >> mhs[i].nilai.absen;
		cout<<"Masukkan Nilai Tugas	: "; cin >> mhs[i].nilai.nTugas;
		cout<<"Masukkan Nilai Mid : "; cin >> mhs[i].nilai.nMid;
		cout<<"Masukkan Nilai Ujian	: "; cin >> mhs[i].nilai.nUjian;
	
		mhs[i].nilai.na = (0.10*mhs[i].nilai.absen) + (0.20*mhs[i].nilai.nTugas) + (0.30*mhs[i].nilai.nMid) + (0.40*mhs[i].nilai.nUjian);
	
		
		
	}
	for(int j = 0; j <= MaxM; j++){
		cout<<"\nnNilai Akhir dari mahasiswa ini	= "<<mhs[j].nilai.na<<endl;
	}
	
	
	ulang2:
		
		
	cout<<"Apakah Ada Data Asisten Yang Ingin Diedit (y/t) )? "; cin >> pa;
	if(pa=='y'||pa=='Y'){
		cout<<"Asisten Ke : ";cin>>g;
		cout<<"\nMemasukkan Informasi Asisten \n";
		cout<<"Masukkan Nama Asisten\t : "; cin >> as[g-1].nama;
		cout<<"Masukkan Nama Matkul Asisten	: "; cin >> as[g-1].matkul;
		cout<<"\n\nNama Asisten \t: "<<as[g-1].nama;
		cout<<"\nNama Matkul Asisten	: "<<as[g-1].matkul;
	}
	else if(pa=='t'||pa=='T'){
		ulang1:
		cout<<"Apakah Ada Data Mahasiswa Yang Ingin Diedit (y/t) )? "; cin >> pm;
		if(pm=='y'||pm=='Y'){
			cout<<"Mahasiswa Ke : ";cin>>g;
			cout<<"Memasukkan Alamat Mahasiswa\n";
			cout<<"Masukkan Nama Jalan\t: "; cin >> mhs[g-1].alm.jln;
			cout<<"Masukkan Nama Kelurahan / Desa : "; cin >> mhs[g-1].alm.kelDesa;
			cout<<"Masukkan Nama Kecamatan\t: "; cin >> mhs[g-1].alm.kec;
			cout<<"Masukkan Nama Kabupaten / Kota	: "; cin >> mhs[g-1].alm.kabKot;
			
			cout<<"\nMenghitung Nilai Akhir  \n\n";
			cout<<"Masukkan NIM\t: "; cin >> mhs[g-1].nim;
			cout<<"Masukkan Nama\t: "; cin >> mhs[g-1].nama;
			cout<<"Masukkan Nilai Absensi	: "; cin >> mhs[g-1].nilai.absen;
			cout<<"Masukkan Nilai Tugas	: "; cin >> mhs[g-1].nilai.nTugas;
			cout<<"Masukkan Nilai Mid\t: "; cin >> mhs[g-1].nilai.nMid;
			cout<<"Masukkan Nilai Ujian	: "; cin >> mhs[g-1].nilai.nUjian;
		
			mhs[g-1].nilai.na = (0.10*mhs[g-1].nilai.absen) + (0.20*mhs[g-1].nilai.nTugas) + (0.30*mhs[g-1].nilai.nMid) + (0.40*mhs[g-1].nilai.nUjian);
			
			cout<<"\n\nAlamat Mahasiswa Ini :\n";
			cout<<"Jalan\t: "<<mhs[g-1].alm.jln<<endl;
			cout<<"Kelurahan / Desa	: "<<mhs[g-1].alm.kelDesa<<endl;
			cout<<"Kecamatan\t: "<<mhs[g-1].alm.kec<<endl;
			cout<<"Kabupaten / Kota	: "<<mhs[g-1].alm.kabKot<<endl;
			
			cout<<"\nNilai Akhir dari mahasiswa ini	= "<<mhs[g-1].nilai.na<<endl<<endl;
		}
		else if(pm=='t'||pm=='T'){
			cout<<"Oke :)";
		}
		else{
			cout<<"tidak valid";
			goto ulang1;
		}
	}
	else{
		cout<<"Tidak valid";
		goto ulang2;
	}
}

#include<iostream>
using namespace std;


struct Detail
{
	int jumHal, harJual;
};

struct RekamanBuku
{
	char judul[30];
	char pengarang[30];
	int jumlah;
	struct Detail *detail;
};

int main()
{
	struct RekamanBuku *ptrBuku, buku;
	ptrBuku = &buku;
	cout<<"input judul buku:  ";cin>>ptrBuku->judul;
	cout<<"input pengarang	: ";cin>>ptrBuku->pengarang;
	cout<<"input stok buku	: ";cin>>ptrBuku->jumlah;
	cout<<"input halaman buku : ";cin>>(*ptrBuku->detail).jumHal;
	cout<<"input harga jual buku : ";cin>>(*ptrBuku->detail).harJual;
	
	
	
	cout<<"judul		: "<<ptrBuku->judul<<endl;
	cout<<"pengarang	: "<<ptrBuku->pengarang<<endl;
	cout<<"jumlah		: "<<ptrBuku->jumlah<<endl;
	cout<<"halaman 	: "<<ptrBuku->detail->jumHal<<endl;
	cout<<"harga		: "<<ptrBuku->detail->harJual<<endl;
	
}

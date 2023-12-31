#include <iostream>
using namespace std;

struct Tgl
{
    int hari;
    int bulan;
    int tahun;
};
struct Almt
{
    char jalan[50];
    char kota[20];
};
struct Gajipeg
{
    float gapok;
    float tunjangan;
    float lembur;
};
struct dtPegawai
{
    char nama[20];
    struct Almt alamat;
    struct Tgl tglMasuk;
    struct Gajipeg gaji;
};

dtPegawai inputGaji (dtPegawai & peg);

float total (float a,float b,float c)
{
	float tot = a + b + c;
	return tot;
}
void inputTgl (Tgl &x)
{
    cout << " Tanggal  :  "; cin>> x.hari;
    cout << " Bulan    :  "; cin>> x.bulan;
    cout << " Tahun    :  "; cin>> x.tahun;
}

void cetak (dtPegawai p, float t)
{
    cout << " \n\nData Pegawai : " << endl;
    cout << "----------------" << endl;
    cout << " Nama   :" << p.nama << endl;
    cout << " Alamat : Jl. " << p.alamat.jalan << "Kota" << p.alamat.kota << endl;
    cout << " Tgl mulai bekerja : " << p.tglMasuk.hari <<
        "/" << p.tglMasuk.bulan <<
        "/" << p.tglMasuk.tahun << endl;
    cout << " Gaji Pokok  Rp. " << p.gaji.gapok << endl;
    cout << " Tunjangan  Rp. " << p.gaji.tunjangan << endl;
    cout << " Gaji Lembur  Rp. " << p.gaji.lembur << endl;
    cout << " Total Gaji bersih  Rp. " <<t;
    cout << endl << endl;
}
int main ()
{
    struct dtPegawai pegawai;
    float totGaji = 0;
    cout << "Masukkan Data Pegawai" << endl;
    cout << "---------------------" << endl;
    cout << "Masukkan nama : "; cin>>pegawai.nama;
    cout << "Masukkan Alamat \n";
    cout << " Jalan  : "; cin>>pegawai. alamat. jalan;
    cout << " Kota   : "; cin>>pegawai.alamat.kota;

    cout << "Masukkan Tanggal mulai bekerja \n";
    inputTgl (pegawai.tglMasuk);
    cout << "Masukkan data penggajian \n";
    pegawai = inputGaji (pegawai);
    totGaji = total (pegawai.gaji.gapok, pegawai.gaji.tunjangan,pegawai.gaji.lembur);
    
    cetak (pegawai, totGaji);

}
    dtPegawai inputGaji(dtPegawai &peg)
    {
        cout << "Gaji Pokok : "; cin>>peg.gaji.gapok;
        cout << "Tunjangan  : "; cin>>peg.gaji. tunjangan;
        cout << "Gaji Lembur : "; cin>>peg.gaji.lembur;
    
    return peg;
}

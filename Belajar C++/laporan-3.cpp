#include <iostream>
#include <string.h>
using namespace std;

char nim[100][7];
char nama[100][31];
char matkul[100][31];  // Tambahan untuk nama matakuliah
char dosen[100][31];   // Tambahan untuk nama dosen
int na[100];

char NimMin[7], NimMax[7];
char namamin[31], namamax[31];
int i, j, nilaiMin, nilaiMax;
float rata2, jumlah;

// Fungsi untuk menghitung nilai maksimum
int hitungNilaiMax(int n) {
    int maxNilai = na[0];
    for (int k = 1; k < n; k++) {
        if (na[k] > maxNilai) {
            maxNilai = na[k];
        }
    }
    return maxNilai;
}

// Fungsi untuk menghitung nilai minimum
int hitungNilaiMin(int n) {
    int minNilai = na[0];
    for (int k = 1; k < n; k++) {
        if (na[k] < minNilai) {
            minNilai = na[k];
        }
    }
    return minNilai;
}

// Fungsi untuk menghitung rata-rata nilai
float hitungRataRata(int n) {
    float total = 0;
    for (int k = 0; k < n; k++) {
        total += na[k];
    }
    return total / n;
}

// Fungsi untuk mencari data berdasarkan nama
void cariDataByNama(int n, const char* targetNama) {
    for (int k = 0; k < n; k++) {
        if (strcmp(nama[k], targetNama) == 0) {
            cout << "Data ditemukan:\n";
            cout << "NIM: " << nim[k] << ", Nama: " << nama[k] << ", Nilai Akhir: " << na[k] << ", Matakuliah: " << matkul[k] << ", Dosen: " << dosen[k] << endl;
            return;
        }
    }
    cout << "Data tidak ditemukan untuk nama '" << targetNama << "'\n";
}

// Fungsi untuk mencari data berdasarkan nama matakuliah
void cariDataByMatkul(int n, const char* targetMatkul) {
    for (int k = 0; k < n; k++) {
        if (strcmp(matkul[k], targetMatkul) == 0) {
            cout << "Data ditemukan:\n";
            cout << "NIM: " << nim[k] << ", Nama: " << nama[k] << ", Nilai Akhir: " << na[k] << ", Matakuliah: " << matkul[k] << ", Dosen: " << dosen[k] << endl;
        }
    }
    cout << "Data tidak ditemukan untuk matakuliah '" << targetMatkul << "'\n";
}

// Fungsi untuk menampilkan semua data
void tampilkanSemuaData(int n) {
    cout << "Daftar Semua Data Mahasiswa:\n";
    for (int k = 0; k < n; k++) {
        cout << "NIM: " << nim[k] << ", Nama: " << nama[k] << ", Nilai Akhir: " << na[k] << ", Matakuliah: " << matkul[k] << ", Dosen: " << dosen[k] << endl;
    }
}

int main() {
    i = 0;
    jumlah = 0;

    cout << "Masukkan data mahasiswa : \n";

    do {
        cout << "Input Nomor Induk Mahasiswa: ";
        cin >> nim[i];

        if (strcmp(nim[i], "x") == 0) {
            break;
        }

        cout << "Input Nama: ";
        cin >> nama[i];

        cout << "Input Matakuliah: ";
        cin >> matkul[i];

        cout << "Input Dosen: ";
        cin >> dosen[i];

        cout << "Input Nilai Akhir: ";
        cin >> na[i];

        jumlah += na[i];
        i++;

    } while (true);

    rata2 = hitungRataRata(i);
    nilaiMin = hitungNilaiMin(i);
    nilaiMax = hitungNilaiMax(i);

    strcpy(namamax, nama[0]);
    strcpy(NimMax, nim[0]);
    strcpy(namamin, nama[0]);
    strcpy(NimMin, nim[0]);

    for (j = 1; j < i; j++) {
        if (na[j] < nilaiMin) {
            nilaiMin = na[j];
            strcpy(NimMin, nim[j]);
            strcpy(namamin, nama[j]);
        }

        if (na[j] > nilaiMax) {
            nilaiMax = na[j];
            strcpy(NimMax, nim[j]);
            strcpy(namamax, nama[j]);
        }
    }

    cout << "Rata-rata nilai akhir = " << rata2 << endl;
    cout << "Mahasiswa dengan nilai akhir tertinggi : \n";
    cout << "NIM: " << NimMax << ", Nama: " << namamax << ", Nilai Akhir: " << nilaiMax << ", Matakuliah: " << matkul[j] << ", Dosen: " << dosen[j] << endl;
    cout << "Mahasiswa dengan nilai akhir terendah : \n";
    cout << "NIM: " << NimMin << ", Nama: " << namamin << ", Nilai Akhir: " << nilaiMin << ", Matakuliah: " << matkul[j] << ", Dosen: " << dosen[j] << endl;

    // Contoh penggunaan fungsi mencari data berdasarkan nama
    char targetNama[31];
    cout << "Masukkan nama yang ingin dicari: ";
    cin >> targetNama;
    cariDataByNama(i, targetNama);

    // Contoh penggunaan fungsi mencari data berdasarkan nama matakuliah
    char targetMatkul[31];
    cout << "Masukkan nama matakuliah yang ingin dicari: ";
    cin >> targetMatkul;
    cariDataByMatkul(i, targetMatkul);

    // Menampilkan semua data
    tampilkanSemuaData(i);
}

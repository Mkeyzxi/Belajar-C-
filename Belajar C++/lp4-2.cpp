#include <iostream>
using namespace std;

struct dataMhs {
    char nim[15];
    char nama[30];
    char alamat[50];
    int nilai[50];
    char *jalan;
    char *kelurahan;
    char *kecamatan;
};

int main() {
    float rataRata, total = 0;
    int jumlah;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;

    dataMhs *ptrMhs;
    ptrMhs = new dataMhs[jumlah];

    for (int j = 0; j < jumlah; j++) {
        cout << "Masukkan data ke-" << j + 1 << " : " << endl;
        cout << "Input nim: ";
        cin >> ptrMhs[j].nim;
        cout << "Input nama: ";
        cin >> ptrMhs[j].nama;
        cout << "Input alamat: ";
        cin >> ptrMhs[j].alamat;

        // Dynamically allocate memory for jalan, kelurahan, and kecamatan
        ptrMhs[j].jalan = new char[50];
        ptrMhs[j].kelurahan = new char[50];
        ptrMhs[j].kecamatan = new char[50];

        cout << "Input jalan: ";
        cin >> ptrMhs[j].jalan;
        cout << "Input kelurahan: ";
        cin >> ptrMhs[j].kelurahan;
        cout << "Input kecamatan: ";
        cin >> ptrMhs[j].kecamatan;

        // Input nilai
        cout << "Input nilai: ";
        for (int k = 0; k < 50; k++) {
            cin >> ptrMhs[j].nilai[k];
            total += ptrMhs[j].nilai[k];
        }
    }

    // Find minimum and maximum values
    int minNilai = ptrMhs[0].nilai[0];
    int maxNilai = ptrMhs[0].nilai[0];

    for (int j = 0; j < jumlah; j++) {
        for (int k = 0; k < 50; k++) {
            if (ptrMhs[j].nilai[k] < minNilai) {
                minNilai = ptrMhs[j].nilai[k];
            }

            if (ptrMhs[j].nilai[k] > maxNilai) {
                maxNilai = ptrMhs[j].nilai[k];
            }
        }
    }

    cout << "Minimum nilai: " << minNilai << endl;
    cout << "Maximum nilai: " << maxNilai << endl;

    rataRata = total / (jumlah * 50);

    for (int j = 0; j < jumlah; j++) {
        cout << endl;
        cout << "Daftar mahasiswa ke-" << j + 1 << ":\n";
        cout << "NIM: " << ptrMhs[j].nim << endl;
        cout << "Nama: " << ptrMhs[j].nama << endl;
        cout << "Alamat: " << ptrMhs[j].alamat << endl;
        cout << "Jalan: " << ptrMhs[j].jalan << endl;
        cout << "Kelurahan: " << ptrMhs[j].kelurahan << endl;
        cout << "Kecamatan: " << ptrMhs[j].kecamatan << endl;
    }

    // Deallocate memory
    for (int j = 0; j < jumlah; j++) {
        delete[] ptrMhs[j].jalan;
        delete[] ptrMhs[j].kelurahan;
        delete[] ptrMhs[j].kecamatan;
    }

    delete[] ptrMhs;

    return 0;
}

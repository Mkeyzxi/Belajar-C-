#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float nilaiAbsensi,nilaiTugas,nilaiMid,nilaiFinal,nilaiAkhir;
    Mahasiswa *next;
};

Mahasiswa* head = NULL;
Mahasiswa* tail = NULL;
Mahasiswa* current = NULL;
Mahasiswa* new_node = NULL;

void printLinkedList() {
    current = head;
    while (current != NULL) {
        cout << "Nama           : " << current->nama << endl;
        cout << "NIM            : " << current->nim << endl;
        cout << "Nilai Absensi  : " << current->nilaiAbsensi << endl;
        cout << "Nilai Tugas    : " << current->nilaiTugas << endl;
        cout << "Nilai Mid      : " << current->nilaiMid << endl;
        cout << "Nilai Final    : " << current->nilaiFinal << endl;
        cout << "Nilai Akhir    : " << current->nilaiAkhir << endl << endl;
        current = current->next;
    }
}

void addMahasiswa() {
    string nama, nim;
    float absensi, tugas, mid, final;

    cout << "Masukkan Nama Mahasiswa: ";
    cin >> nama;
    cout << "Masukkan NIM Mahasiswa: ";
    cin >> nim;
    cout << "Masukkan Nilai Absensi: ";
    cin >> absensi;
    cout << "Masukkan Nilai Tugas: ";
    cin >> tugas;
    cout << "Masukkan Nilai Mid: ";
    cin >> mid;
    cout << "Masukkan Nilai Final: ";
    cin >> final;

    new_node = new Mahasiswa();
    new_node->nama = nama;
    new_node->nim = nim;
    new_node->nilaiAbsensi = absensi;
    new_node->nilaiTugas = tugas;
    new_node->nilaiMid = mid;
    new_node->nilaiFinal = final;
    new_node->nilaiAkhir = (absensi * 0.1) + (tugas * 0.25) + (mid * 0.25) + (final * 0.4);
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
}

Mahasiswa* findMahasiswaByNIM(string nim) {
    current = head;
    while (current != NULL) {
        if (current->nim == nim) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void findMahasiswaByMinNilaiAkhir(float minNilaiAkhir) {
    current = head;
    bool found = false;

    cout << "Mahasiswa dengan nilai akhir minimum " << minNilaiAkhir << " adalah:" << endl;
    
    while (current != NULL) {
        if (current->nilaiAkhir >= minNilaiAkhir) {
            cout << "Nama           : " << current->nama << endl;
            cout << "NIM            : " << current->nim << endl;
            cout << "Nilai Absensi  : " << current->nilaiAbsensi << endl;
            cout << "Nilai Tugas    : " << current->nilaiTugas << endl;
            cout << "Nilai Mid      : " << current->nilaiMid << endl;
            cout << "Nilai Final    : " << current->nilaiFinal << endl;
            cout << "Nilai Akhir    : " << current->nilaiAkhir << endl << endl;
            found = true;
        }
        current = current->next;
    }

    if (!found) {
        cout << "Tidak ada mahasiswa dengan nilai akhir minimum " << minNilaiAkhir << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "Menu:\n";
        cout << "1. Tambah Mahasiswa\n";
        cout << "2. Tampilkan Data Mahasiswa\n";
        cout << "3. Cari Mahasiswa Berdasarkan NIM\n";
        cout << "4. Cari Mahasiswa Berdasarkan Nilai Akhir Minimum\n";
        cout << "5. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addMahasiswa();
                break;
            case 2:
                printLinkedList();
                break;
            case 3: {
                string searchNIM;
                cout << "Masukkan NIM Mahasiswa yang Dicari: ";
                cin >> searchNIM;
                Mahasiswa* foundMahasiswa = findMahasiswaByNIM(searchNIM);
                if (foundMahasiswa != NULL) {
                    cout << "Mahasiswa dengan NIM " << searchNIM << " ditemukan:" << endl;
                    cout << "Nama           : " << foundMahasiswa->nama << endl;
                    cout << "NIM            : " << foundMahasiswa->nim << endl;
                    cout << "Nilai Akhir    : " << foundMahasiswa->nilaiAkhir << endl << endl;
                } else {
                    cout << "Mahasiswa dengan NIM " << searchNIM << " tidak ditemukan." << endl;
                }
                break;
            }
            case 4: {
                float minNilaiAkhir;
                cout << "Masukkan Nilai Akhir Minimum: ";
                cin >> minNilaiAkhir;
                cout << "Mahasiswa dengan nilai akhir minimum " << minNilaiAkhir << " adalah:" << endl;
                findMahasiswaByMinNilaiAkhir(minNilaiAkhir);
                break;
            }
            }
	} while (choice != 5);

    cout << "Sampai Jumpa :0";

    return 0;
}
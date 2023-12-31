#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama,nim;
    char kelas;

    Mahasiswa *next;
    
};
Mahasiswa *head,*tail,*cur;


void nyimpanMahasiswa(string nama,string nim,char kelas){
    head = new Mahasiswa();
    head->nama = nama;
    head->kelas = kelas;
    head->nim = nim;
    head->next = NULL;
    tail = head; 
}

void cetakMahsiswa(){
    cur = head;
    while(cur != NULL){
    cout << cur->nama <<endl;
    cout << cur->nim <<endl;
    cout << cur->kelas <<endl;
    cur = cur->next;
    }
}

int main(){
    nyimpanMahasiswa("makbul","200",'D');
    cetakMahsiswa();
    nyimpanMahasiswa("reza","230",'A');
    cetakMahsiswa();
}
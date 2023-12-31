#include <iostream>
using namespace std;

struct Ktp{
    string nama,alamat,ttl;
    Ktp *next;
};
Ktp *head,*tail,*cur,*newNode;

void singleLinkedList1(string nama,string alamat,string ttl){
    head = new Ktp();
    head->nama = nama;
    head->alamat = alamat;
    head->ttl = ttl;
    head->next = newNode;

    
}

void singleLinkedList2(string nama,string alamat,string ttl){
    newNode = new Ktp();
    newNode->nama = nama;
    newNode->alamat = alamat;
    newNode->ttl = ttl;
    newNode->next = tail;

    
}
void singleLinkedList3(string nama,string alamat,string ttl){
    tail = new Ktp();
    tail->nama = nama;
    tail->alamat = alamat;
    tail->ttl = ttl;
    tail->next = NULL;

}


void display(){
    cur = head;
    while(cur != NULL){
        cout << "nama : " << cur->nama << endl; 
        cout << "alamat : " << cur->alamat << endl;
        cout << "tmpt/tgl/lhr : " << cur->ttl << endl;
        cur = cur->next;
    }
}


int main(){
    singleLinkedList3("reza","jl. kamu","23 feb 2004 | mamuju");
    singleLinkedList2("mbul","jl. kamu","23 feb 2004 | mamuju");
    singleLinkedList1("jihan","jl. kamu","23 feb 2004 | mamuju");
    display();
    return 0;
}
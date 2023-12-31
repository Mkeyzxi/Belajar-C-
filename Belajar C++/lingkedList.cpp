#include <iostream>
using namespace std;

struct Buku {
    string nama;
    int harga;
    int jmlHal;
    Buku *next;
};

Buku *head, *tail, *cur, *newNode, *del;

void addSingleLinkedList(string nama, int harga, int jmlHal){
    head = new Buku;
    head->nama = nama;
    head->harga = harga;
    head->jmlHal = jmlHal;
    head->next = newNode;
    newNode = head;
}

void singleLinkedList(string nama, int harga, int jmlHal){
    newNode = new Buku;
    newNode->nama = nama;
    newNode->harga = harga;
    newNode->jmlHal = jmlHal;
    newNode->next = NULL;
    head = newNode;
}



void printLinkedList(){
    cur = head;
    while(cur != NULL) {
        cout << cur->nama << endl;
        cout << cur->harga << endl;
        cout << cur->jmlHal << endl << endl;

        cur = cur->next;
    }
}
void deleteLinkedList(){
    del = head;
    head = head->next;
    delete del;
}


int main(){
    singleLinkedList("rika",3900,50);
    addSingleLinkedList("mbul",78000,70);
    addSingleLinkedList("dula",8900,20);
    addSingleLinkedList("dula",8900,20);
    
    cout << "data head : " << head->nama << endl;
    cout << "data head : " << head->harga << endl;
    cout << "data head : " << head->jmlHal << endl;
    cout << endl << endl;
    cout << "data newNode : " << newNode->nama << endl;
    cout << "data newNode : " << newNode->harga << endl;
    cout << "data newNode : " << newNode->jmlHal << endl;

    

    

    return 0;
}

#include <iostream>
using namespace std;

int MAX = 10;
struct Node{
    int data;
    struct Node *next;
};

struct Node *top = NULL, *current, *new_node;

// menghitung banyak data
int count(){
    int item_count = 0;
    if(top == NULL) return item_count;

    else{
        current = top;
        while (current != NULL){
            item_count++;
            current = current->next;
        }
        return item_count;
    }
}
bool isEmpty(){
    if(top == NULL) return true;
    return false;
}
// mengecek apakah tumpukan kosong
bool isFull(){
    if(count() == MAX) return true;
    return false;
}

// mengecek apakah tumpukan sudah penuh


// melihat data berdasarkan urutan
void peek(int order){
    int item = 0;
    if(isEmpty()) cout << "Stack is Empty!";
    else{
        current = top;
        while (current != NULL){
            item++;
            if(item == order){
                cout << "data is order " << order << " are " << current->data;
                break;
            }
            current = current->next;
        }
    }
}

// membersihkan semua data di tumpukan
void destroy(){

}
void pushpush(int val){
    if(isFull()) cout << "stack is overvlow!";

    else{
        struct Node* newnode = new Node();
        newnode->data = val;
        newnode->next = top;
        top = newnode;
    }
}

void pop(){
    if(isEmpty())
    cout << "stack is underflow!";

    else{
        cout << "The popped element is " << top->data << endl;
    }
}

void display(){
    if(isEmpty()) cout << "stack is empty!";

    else{
        current = top;
        cout << "stack element are : ";
        while(current != NULL){
            cout << current->data << " ";
            current = current->next;
        }
    }
    cout << endl;
}

int main(){
    pushpush(9);
    pushpush(7);
    display();
    pushpush(3);
    display();
    cout << endl;
    pushpush(1);
    pop();
    pushpush(2);
    display();
}
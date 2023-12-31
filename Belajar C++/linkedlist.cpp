#include <iostream>
using namespace std;

struct Students{
    string name;
    string nim;
    Students *next;
};

Students *head, *tail, *previous,*current, *new_node;

void createSingleList(string name, string nim){
    head = new Students();
    head->name = name;
    head->nim = nim;
    head->next = NULL;
    tail = head;
}

void printLinkedList(){
    current = head;
    while(current != NULL){
        cout << "Student name : " << current->name << endl;
        cout << "Student nim : " << current->nim << endl;
        current = current->next;
    }
}
void addAtTail(string name, string nim){
    new_node = new Students();
    new_node->name = name;
    new_node->nim = nim;
    new_node->next = NULL;
    tail->next = new_node;
    tail = new_node;
}

void addAtHead(string name, string nim){
    new_node = new Students();
    new_node->name = name;
    new_node->nim = nim;
    new_node->next = head;
    head = new_node;
}
int main(){
    createSingleList("Mbul","123");
    addAtTail("Mbul","070");
    addAtHead("Mbul","080");
    printLinkedList();
    return 0;
}
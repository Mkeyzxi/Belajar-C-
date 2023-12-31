#include <iostream>
using namespace std;
struct Student {
    int age;
    double gpa;
    string name;
};

int main() {
    Student student;
    student.name = "Alice";
    student.age = 20;
    student.gpa = 3.7;

    cout << "Nama: " << student.name << endl;
    cout << "Usia: " << student.age << endl;
    cout << "IPK: " << student.gpa << endl;

    return 0;
}

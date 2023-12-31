#include <iostream>
using namespace std;
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    Date today;
    today.day = 2;
    today.month = 11;
    today.year = 2023;

    cout << "Tanggal: " << today.day << "/" << today.month << "/" << today.year << endl;

    return 0;
}

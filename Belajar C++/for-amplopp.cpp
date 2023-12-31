#include <iostream>

int main() {
    int sisi;

    std::cout << "Masukkan panjang sisi persegi: ";
    std::cin >> sisi;

    for (int i = 1; i <= sisi; i++) {
        for (int j = 1; j <= sisi; j++) {
            if (i == 1 || i == sisi || j == 1 || j == sisi || i== 2){
                // Cetak simbol bintang untuk tepi persegi
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

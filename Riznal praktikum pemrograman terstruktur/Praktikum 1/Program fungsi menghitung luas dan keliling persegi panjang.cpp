#include <iostream>

double hitungLuas(double panjang, double lebar) {
    return panjang * lebar;
}

double hitungKeliling(double panjang, double lebar) {
    return 2 * (panjang + lebar);
}

int main() {
    double panjang, lebar;

    std::cout << "Masukkan Panjang Persegi Panjang: ";
    std::cin >> panjang;

    std::cout << "Masukkan Lebar Persegi Panjang: ";
    std::cin >> lebar;

    double luas = hitungLuas(panjang, lebar);
    double keliling = hitungKeliling(panjang, lebar);

    std::cout << "Luas Persegi Panjang: " << luas << std::endl;
    std::cout << "Keliling Persegi Panjang: " << keliling << std::endl;

    return 0;
}

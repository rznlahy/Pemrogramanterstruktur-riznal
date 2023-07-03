#include <iostream>

int main() {
    double kilometer, meter;

    std::cout << "Masukkan Jumlah Kilometer: ";
    std::cin >> kilometer;

    meter = kilometer * 1000;

    std::cout << "Hasil Konversi: " << meter << " meter" << std::endl;

    return 0;
}

#include <iostream>

int main() {
    double jumlahUang;

    std::cout << "Masukkan jumlah uang (dalam Rupiah): ";
    std::cin >> jumlahUang;

    double dollarAmerika = jumlahUang / 15000;
    double uero = jumlahUang / 16000;
    double poundsterling = jumlahUang / 18000;
    double yen = jumlahUang / 11000;
    double riyalSaudi = jumlahUang / 4000;

    std::cout << "Jumlah uang dalam mata uang lain:" << std::endl;
    std::cout << "Dollar Amerika: $" << dollarAmerika << std::endl;
    std::cout << "Uero: €" << uero << std::endl;
    std::cout << "Poundsterling: £" << poundsterling << std::endl;
    std::cout << "Yen: ¥" << yen << std::endl;
    std::cout << "Riyal Saudi: ﷼" << riyalSaudi << std::endl;

    return 0;
}

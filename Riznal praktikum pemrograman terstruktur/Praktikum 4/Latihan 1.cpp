#include <iostream>

int main() {
    int jumlahTaliwang;
    double hargaPaket;

    std::cout << "Masukkan jumlah Ayam Taliwang yang ingin dipesan: ";
    std::cin >> jumlahTaliwang;

    std::cout << "Masukkan harga paket Ayam Taliwang: ";
    std::cin >> hargaPaket;

    double totalBiaya = jumlahTaliwang * hargaPaket;

    std::cout << "\nAnalisis Biaya Ayam Taliwang" << std::endl;
    std::cout << "Total Ayam Taliwang: " << jumlahTaliwang << std::endl;
    std::cout << "Harga paket Ayam Taliwang: " << hargaPaket << std::endl;
    std::cout << "Total biaya: " << totalBiaya << std::endl;

    return 0;
}

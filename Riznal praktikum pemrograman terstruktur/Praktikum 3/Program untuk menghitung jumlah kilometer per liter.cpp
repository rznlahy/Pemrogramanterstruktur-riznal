#include <iostream>

int main() {
    double totalJarak, totalLiter;

    std::cout << "Masukkan jumlah jarak yang telah Anda tempuh (dalam kilometer): ";
    std::cin >> totalJarak;

    std::cout << "Masukkan jumlah liter bahan bakar yang Anda habiskan: ";
    std::cin >> totalLiter;

    double rataRata = totalJarak / totalLiter;

    std::cout << "Jumlah kilometer per liter: " << rataRata << " km/L" << std::endl;

    return 0;
}

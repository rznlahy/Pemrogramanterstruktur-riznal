#include <iostream>

const int DETIK_PER_HARI = 86400;
const int DETIK_PER_JAM = 3600;
const int DETIK_PER_MENIT = 60;

int main() {
    int totalDetik;

    std::cout << "Masukkan jumlah detik: ";
    std::cin >> totalDetik;

    int hari = totalDetik / DETIK_PER_HARI;
    int sisaDetik = totalDetik % DETIK_PER_HARI;

    int jam = sisaDetik / DETIK_PER_JAM;
    sisaDetik %= DETIK_PER_JAM;

    int menit = sisaDetik / DETIK_PER_MENIT;
    sisaDetik %= DETIK_PER_MENIT;

    std::cout << "Waktu ekivalen: " << hari << " hari, " << jam << " jam, " << menit << " menit, " << sisaDetik << " detik" << std::endl;

    return 0;
}

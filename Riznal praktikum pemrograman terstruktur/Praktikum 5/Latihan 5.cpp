#include <iostream>

struct pemain {
    char nama[20];
    float tinggi_badan;
    double rata_gol;
};

int main() {
    using namespace std;

    pemain timnas = {"Irfan Bachdim", 1.80, 2.49}; // Inisialisasi variabel timnas
    pemain pssi;

    cout << "Timnas: " << timnas.nama << ", Tinggi Badan: " << timnas.tinggi_badan << ", Rata-Rata Gol: " << timnas.rata_gol << endl;

    pssi = timnas; // Menugaskan satu struktur ke struktur lain

    cout << "PSSI: " << pssi.nama << ", Tinggi Badan: " << pssi.tinggi_badan << ", Rata-Rata Gol: " << pssi.rata_gol << endl;

    return 0;
}

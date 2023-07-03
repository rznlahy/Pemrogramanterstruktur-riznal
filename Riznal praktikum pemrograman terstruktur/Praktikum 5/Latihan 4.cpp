#include <iostream>

struct pemain {
    // deklarasi struktur
    char nama[20];
    float tinggi_badan;
    double rata_gol;
};

int main() {
    using namespace std;

    pemain pssi = {"Christian Gonzales", 1.88, 2.99}; // pssi adalah variabel struktur bertipe pemain, dinisialisasi dengan nilai-nilai di atas
    pemain garuda = {"Firman Utina", 1.77, 1.99}; // garuda adalah variabel struktur bertipe pemain

    cout << "Pemain Timnas Garuda: " << pssi.nama << ", Tinggi Badan: " << pssi.tinggi_badan << ", Rata-Rata Gol: " << pssi.rata_gol << endl;
    cout << "dan " << garuda.nama << ", Tinggi Badan: " << garuda.tinggi_badan << ", Rata-Rata Gol: " << garuda.rata_gol << endl;

    cout << "Indonesia bangga memiliki mereka." << endl;

    return 0;
}

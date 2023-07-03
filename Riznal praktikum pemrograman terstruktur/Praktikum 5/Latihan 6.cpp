#include <iostream>

struct pemain {
    char nama[20];
    float tinggi_badan;
    double rata_gol;
};

int main() {
    using namespace std;

    pemain pssi[2] = {
        {"Christian Gonzales", 1.88, 2.99},
        {"Firman Utina", 1.77, 1.99}
    };

    cout << "Nama: " << pssi[0].nama << ", Tinggi Badan: " << pssi[0].tinggi_badan << ", Rata-Rata Gol: " << pssi[0].rata_gol << endl;
    cout << "dan" << endl;
    cout << pssi[1].nama << ", Tinggi Badan: " << pssi[1].tinggi_badan << ", Rata-Rata Gol: " << pssi[1].rata_gol << endl;
    cout << "Indonesia bangga memiliki mereka" << endl;

    return 0;
}

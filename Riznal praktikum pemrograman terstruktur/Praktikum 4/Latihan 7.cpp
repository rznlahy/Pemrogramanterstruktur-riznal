#include <iostream>
#include <string>

int main() {
    using namespace std;

    char charr1[20];
    char charr2[] = "harimau";
    string str1;
    string str2 = "singa";

    cout << "Masukkan nama binatang: ";
    cin >> charr1;

    cout << "Masukkan nama binatang yang lain: ";
    cin >> str1;

    cout << "Ini adalah beberapa nama binatang: \n";
    cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;

    cout << "Huruf ketiga " << charr2 << " adalah " << charr2[2] << endl;
    cout << "Huruf ketiga di dalam " << str2 << " adalah " << str2[2] << endl;

    return 0;
}

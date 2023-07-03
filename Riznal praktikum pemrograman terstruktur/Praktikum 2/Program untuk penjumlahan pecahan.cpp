#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void addFractions(int a, int b, int c, int d) {
    int numerator = (a * d) + (b * c);
    int denominator = b * d;
    int gcdValue = gcd(numerator, denominator);

    numerator /= gcdValue;
    denominator /= gcdValue;

    std::cout << "Hasil Penjumlahan Pecahan: " << numerator << "/" << denominator << std::endl;
}

int main() {
    int a, b, c, d;

    std::cout << "Masukkan pecahan pertama (a/b): ";
    std::cin >> a >> b;

    std::cout << "Masukkan pecahan kedua (c/d): ";
    std::cin >> c >> d;

    addFractions(a, b, c, d);

    return 0;
}

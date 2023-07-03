#include <iostream>

int main() {
    int result_a = 6 * 7 / 14 - 3;
    int result_b = 29 % 4 * 11;
    int result_c = 34 / 7 * 18;
    double result_d = 15.0 * 34 / 13;
    int result_e = 215 - 75 % 19;

    std::cout << "Hasil a) 6 * 7 / 14 - 3 = " << result_a << std::endl;
    std::cout << "Hasil b) 29 % 4 * 11 = " << result_b << std::endl;
    std::cout << "Hasil c) 34 / 7 * 18 = " << result_c << std::endl;
    std::cout << "Hasil d) 15.0 * 34 / 13 = " << result_d << std::endl;
    std::cout << "Hasil e) 215 - 75 % 19 = " << result_e << std::endl;

    return 0;
}

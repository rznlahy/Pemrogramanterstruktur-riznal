#include <iostream>
#include <string>

int main() {
    std::string nama, alamat, nim, prodi;

    std::cout << "Masukkan Nama: ";
    std::getline(std::cin, nama);

    std::cout << "Masukkan Alamat: ";
    std::getline(std::cin, alamat);

    std::cout << "Masukkan NIM: ";
    std::getline(std::cin, nim);

    std::cout << "Masukkan Program Studi: ";
    std::getline(std::cin, prodi);

    std::cout << "\nDATA MAHASISWA" << std::endl;
    std::cout << "Nama: " << nama << std::endl;
    std::cout << "Alamat: " << alamat << std::endl;
    std::cout << "NIM: " << nim << std::endl;
    std::cout << "Program Studi: " << prodi << std::endl;

    return 0;
}

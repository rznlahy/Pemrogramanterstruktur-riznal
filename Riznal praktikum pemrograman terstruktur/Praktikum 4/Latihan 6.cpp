// kode3.6.cpp

#include <iostream>

int main()
{

using namespace std;
cout << "Tahun berapa rumah anda dibangun?\n";
int tahun;
cin >> tahun;
cout << "Dimana alamat rumah anda?\n";
char alamat[80];
cin.getline(alamat, 80);
cout << "Tahun dibangun: " << tahun << endl;
cout << "Alamat: " << alamat << endl;
cout << "Selesai!\n";
return 0;

}
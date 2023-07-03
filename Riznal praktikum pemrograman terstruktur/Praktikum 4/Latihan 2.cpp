#include <iostream>

#include <cstring>

int main() {

using namespace std;

const int Ukuran = 15;
char nama1 [Ukuran];
char nama2[Ukuran]= "Rismon";
cout << "Hai, Saya " << nama2;
cout<<"! Boleh tahu nama anda?\n";
cin >> nama1;

cout << "Jadi, " << nama1 << ", nama anda memiliki ";
cout << strlen(nama1) << " huruf dan disimpan\n";
cout << "di dalam suatu array " << sizeof(nama1) << " byte.\n";
cout << "Inisial anda adalah " << nama1[0] << ". \n";

nama2[3] = '\0';

cout<<"Berikut adalah tiga karakter pertama dari nama saya: ";

cout << nama2 << endl;

return 0;

    
}
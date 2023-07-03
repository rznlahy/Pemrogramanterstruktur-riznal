#include <iostream> 
int main() 
{
using namespace std;

const int Dimensi = 20;
char nama [Dimensi];
char pacar[Dimensi];
cout << "Masukkan nama anda:\n";
cin.getline(nama, Dimensi);
cout << "Masukkan nama kekasih anda:\n";
cin.getline(pacar, Dimensi);
cout << "Anda beruntung memiliki kekasih bernama "<< pacar;
cout<<", Selamat!"<< nama << "\n";

return 0;

}
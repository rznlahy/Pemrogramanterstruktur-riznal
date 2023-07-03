#include <iostream>
#include <conio.h>

enum apaKATA { TIDAK, YA };

int main()
{
    using namespace std;

    apaKATA KATA = TIDAK;
    char ch = 'a';
    int jlh_kata = 0;

    cout << "Masukkan suatu frase:\n";

    ch = getch(); // Gunakan getch() untuk membaca karakter termasuk spasi
    while (ch != '\r')
    {
        if (ch == ' ' && KATA == YA)
        {
            KATA = TIDAK;
        }
        else if (ch != ' ' && KATA == TIDAK)
        {
            jlh_kata++;
            KATA = YA;
        }

        ch = getch(); // Gunakan getch() untuk membaca karakter termasuk spasi
    }

    cout << "\n---Jumlah kata adalah " << jlh_kata << "---\n";

    return 0;
}

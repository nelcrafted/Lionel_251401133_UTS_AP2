#include <iostream>
using namespace std;

int main() {
    system("CLS");

    string input;
    int i = 0, jumlah = 0;
    bool dalamKata = false;

    cout << "Masukkan daftar judul buku : ";
    getline(cin, input);

    while (i < input.length()) {
        if (input[i] != ' ' && dalamKata == false) {
            jumlah++;
            dalamKata = true;
        } else if (input[i] == ' ') {
            dalamKata = false;
        }
        i++;
    }

    cout << "Jumlah judul buku : " << jumlah << endl;

    return 0;
}
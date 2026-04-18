#include <iostream>
using namespace std;

int main() {
    system("CLS");

    string input;
    int i = 0, panjang = 0, jumlah = 0;

    cout << "Masukkan daftar judul buku: ";
    getline(cin, input);

    while (i < input.length()) {
        if (input[i] != ' ') {
            panjang++;
        } else {
            if (panjang > 0) {
                cout << "Panjang kata ke-" << jumlah + 1 << ": " << panjang << endl;
                jumlah++;
                panjang = 0;
            }
        }
        i++;
    }

    if (panjang > 0) {
        cout << "Panjang kata ke-" << jumlah + 1 << ": " << panjang << endl;
        jumlah++;
    }

    cout << "Jumlah judul buku: " << jumlah << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    system("CLS");

    long long biner;
    cout << "Input kode biner : ";
    cin >> biner;

    long long temp = biner;
    int desimal = 0;
    int pangkat = 1; 

    while (temp > 0) {
        int digit = temp % 10;

        if (digit != 0 && digit != 1) {
            cout << "Pesan Rusak!" << endl;
            return 0;
        }

        desimal += digit * pangkat;
        pangkat *= 2;
        temp /= 10;
    }

    cout << "Angka desimal dari biner " << biner << " adalah = " << desimal << endl;

    return 0;
}
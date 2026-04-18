#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int N;

    cout << "kode : ";
    cin >> N;

    if (N > 0 && (N & (N - 1)) == 0)
        cout << "ya";
    else
        cout << "bukan";
}
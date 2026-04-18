#include <iostream>
using namespace std;

int main() {
    system("CLS");

    string nama, nim;
    float n1, n2, n3, rata_rata;

    cout << "Nama Mahasiswa : ";
    cin >> nama;
    cout << "NIM : ";
    cin >> nim;

    cout << "Nilai mata kuliah : "<< endl;
    cout << " Algoritma dan Pemrograman : ";
    cin >> n1;
    cout << " Probabilitas dan Statistika : ";
    cin >> n2;
    cout << " Sistem Operasi : ";
    cin >> n3;

    cout << endl;

    cout << "Algoritma dan Pemrograman : ";
    if (n1 >= 60)
        cout << "Lulus." << endl;
    else
        cout << "Tidak Lulus." << endl;

    cout << "Probabilitas dan Statistika : ";
    if (n2 >= 60)
        cout << "Lulus." << endl;
    else
        cout << "Tidak Lulus." << endl;

    cout << "Sistem Operasi : ";
    if (n3 >= 60)
        cout << "Lulus." << endl;
    else
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;

    rata_rata = (n1 + n2 + n3) / 3;
    cout << "Nilai Rata-Rata Semester ini : " << rata_rata << endl;
}
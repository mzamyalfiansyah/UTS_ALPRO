#include <iostream>
using namespace std;

int main() {
    float berat, tinggi, imt;

    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (m): ";
    cin >> tinggi;

    imt = berat / (tinggi * tinggi);
    cout << "Indeks Massa Tubuh (IMT): " << imt << endl;

    if (imt < 18.5) {

        cout << "Kriteria: Kekurangan berat badan" << endl;

    } else if (imt >= 18.5 && imt < 24.9) {

        cout << "Kriteria: Berat badan normal" << endl;

    } else if (imt >= 25 && imt < 29.9) {

        cout << "Kriteria: Kelebihan berat badan" << endl;

    } else {
        cout << "Kriteria: Obesitas" << endl;
    }

    return 0;
}

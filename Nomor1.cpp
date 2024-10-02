#include<iostream>
using namespace std;

int absen;
int tugas;
int uts;
int uas;
int nilai_akhir;

int main(){

    cout << "Nama : Muhammad Zamy Alfiansyah" << endl;
    cout << "Kelas : 1B-Informatika" << endl;
    cout << "===============================" << endl;
    cout << endl;


    cout << "masukkan nilai absen: ";
    cin >> absen;

    cout << "masukkan nilai tugas: ";
    cin >> tugas;

    cout << "masukkan nilai uts: ";
    cin >> uts;

    cout << "masukkan nilai uas: ";
    cin >> uas;

    nilai_akhir = ((0.1*absen)+(0.2*tugas)+(0.3*uts)+(0.4*uas));


 if(nilai_akhir > 85){

    cout << "Nilai akhir : A" << endl;

 }else if(nilai_akhir >= 80){

    cout << "Nilai akhir : B" << endl;

 }else if(nilai_akhir >= 75){

    cout << "Nilai akhir : C" << endl;

 }else if(nilai_akhir >= 70){

    cout << "Nilai akhir : D" << endl;

 }else if(nilai_akhir <= 70){

    cout << "Nilai akhir C" << endl;

 }
    return 0;
}

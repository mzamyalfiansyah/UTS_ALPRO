#include <iostream>
using namespace std;





int main()
{

    cout << "Nama : Muhammad Zamy Alfiansyah" << endl;
    cout << "Kelas : 1B-Informatika" << endl;
    cout << "===============================" << endl;
    cout << endl;


  int tinggi_segitiga,i,j,k;

  cout << "Masukkan angka: ";
  cin >> tinggi_segitiga;

  cout << endl;

  for(i=1; i<=tinggi_segitiga; i++) {

    for(j=1; j<=tinggi_segitiga; j++) {
      cout << " ";
    }

    for(k=1; k<=i; k++) {
      cout << " *";
    }
    cout << endl;
  }

  return 0;
}

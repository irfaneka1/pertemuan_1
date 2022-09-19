#include <iostream>

using namespace std;

int main()
{
    cout << " Nama : Muhammad Irfan Eka Dhamhudi " << endl;
    cout << " NIM : A11.2022.14136 " << endl;

    //menghitung luas lingkaran

    float r, luas;

    cout << " Input jari-jari lingkaran : ";
    cin >> r;
    luas = 3.14*r*r;

    cout << " Luas lingkaran = " << luas << endl;

    //menghitung luas persegi panjang

    float p;
    float l;
    float t;
    float hasil;

    cout << " Input panjang : ";
    cin >> p;

    cout << " Input lebar : ";
    cin >> l;

    cout << " Input tinggi : ";
    cin >> t;

    hasil=p*l*t;
    cout << " Hasil : " << hasil;

    return 0;
}

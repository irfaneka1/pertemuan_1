#include <iostream>

using namespace std;

int main()
{
    cout << "==========================================" << "\n";

    cout << " Nama : Muhammad Irfan Eka Dhamhudi "<< "\n";
    cout << " Kelompok : 4104 "<< "\n";
    cout << " NIM : A11.2022.14136 "<< "\n";


    cout << "==========================================" <<endl;

    int f1 = 0, f2 = 1, hasil = 0;

    for (int i = 1; i <= 10; i++){
        //for kedua untuk melakukan bilangan agar membentuk pola seegitiga
        /*for( int j = 1; j <= i; j++)*/
        hasil = f1 + f2;
        cout << hasil<< ", ";
        f1 = f2;
        f2 = hasil;

        //untuk membuat pola segitiga sma kaki menggunakan perintah dibawah
        /*f1 = 0;
        f2 = 1;
        hasil = 0;
        cout <<"\n";*/
    }
    cout <<"\n""==========================================" <<endl;

}

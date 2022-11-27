#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << " Nama : Muhammad Irfan Eka Dhamhudi " << endl;
    cout << " NIM : A11.2022.14136 " << endl;
    cout << " Matkul : Dasar Pemrograman " << endl;
    int b, r=0, angka, mins, maks, u, o, p=0, j, k, l=0,c;
    float rata,f;

    cout << " ----------------- " << endl;
    cout << " soal 1 " << endl;
    cout << " ----------------- " << endl;
    for (int a = 100, b = 1; a >= 1 && b <= 100; a--, b++){
        cout << " i = " << a << "  b = " << b << endl;
    }

    cout << " ----------------- " << endl;
    cout << " soal 2 " << endl;
    cout << " ----------------- " << endl;
    for(int c = 1; c <= 100; c++){
        if( c%2 == 1){
            continue;
        }
            cout << " Nilai genap adalah " << c << endl;
    }

    cout << " ----------------- " << endl;
    cout << " soal 3 " << endl;
    cout << " ----------------- " << endl;
    for (int d = 100; d >= 1; d--){
            cout << " " << d << endl;
        if(d == 55){
            break;
        }
    }

    cout << " ----------------- " << endl;
    cout << " soal 4 " << endl;
    cout << " ----------------- " << endl;
    for(int e = 1; e <=20; e++){
        cout << " " << e << endl;
        r += e;
        rata = (float)r/e;
    }
        cout << " Jumlah : " << r << endl;
        cout << " Rata-rata : " << rata << endl;


    cout << " --------------- " << endl;
    cout << " Soal no.5 " << endl;
    cout << " --------------- " << endl;
     int a;
     cout << " Program akan berhenti ketikan anda memasukan angka -99" << endl;
     cout << "\n";
     for(int i = 1; i <=500; i++){
        cout << " Masukan Nilai Anda : ";
        cin >> a;
        if(a == -99){
            cout << " Keluar karena break " << endl;
            break;
        }
     }

    cout << " --------------- " << endl;
    cout << " Soal no.6 " << endl;
    cout << " --------------- " << endl;
    for(u = 1; ; u++) {
    cout << "Masukan Nilai Anda = ";
    cin >> angka;
    if(angka == -99) {
        break;
    }

    if(u == 1) {
        mins = angka;
        maks = angka;
    } else { if(angka > maks) {
        maks = angka;
    } if(angka < mins) {
        mins = angka;
    }
    }
    }
    cout << endl;
    cout << "Max = " << maks << endl;
    cout <<"Min = " << mins << endl;



    cout << " --------------- " << endl;
    cout << " Soal no.7 " << endl;
    cout << " --------------- " << endl;

    for (int i = 1; ; i++){
        cout << " Input bilangan : ";
        cin >> o;
    if (o == 9999){
        break;
    }
    cout << o << endl;
    p = p + o;
    }
    cout << " Jumlah angka : " << p << endl;



    cout << " --------------- " << endl;
    cout << " Soal no.8 " << endl;
    cout << " --------------- " << endl;
    for(j = 0; ; j++) {
    cout << "Masukan Nilai Anda = ";
    cin >> angka;
    if(angka == 9999) {
        break;
    }
    cout << angka << endl;
    a += j;
    }
    cout << "Jumlah angka = " << j << endl;



    cout << " --------------- " << endl;
    cout << " Soal no.9 " << endl;
    cout << " --------------- " << endl;
    for(j = 0; ; j++) {
    cout << "Masukan Nilai Anda = ";
    cin >> k;
    cout << k << endl;
    if(k == 9999) {
        break;
    } else if(k != 9999) {
        l += k;
    }
    b += 1;
    }
    cout << "Jumlah angka = " << l << endl;
    cout << "Jumlah cacah angka = " << b << endl;



    cout << " --------------- " << endl;
    cout << " Soal no.10 " << endl;
    cout << " --------------- " << endl;
    for (int i = 1; i <= 10; i++){
        cout << " Looping yang ke - " << i <<endl;

        for (int j = 1; j <= 10; j++){
            cout << " - angka " << j << " - " << endl;
    }

    }

    cout << " --------------- " << endl;
    cout << " Soal no.11 " << endl;
    cout << " --------------- " << endl;

    cout << " Masukan angka : ";
    cin >> a;

    for (int x = 0; x <= 10; x++){
        cout << " " << a << " X " << x << " = " << (a*x )<< endl;
    }

    cout << " --------------- " << endl;
    cout << " Soal no.12 " << endl;
    cout << " --------------- " << endl;
    cout << "Celcius     Fahremheit" << endl;
    cout << "-------------------------" << endl;
    for(int c = 0; c <= 100; c++) {
    f = ((9.0/5)*c)+32;
    printf("%d \t|\t %.1f |\n",c, f);

    }


    cout << " --------------- " << endl;
    cout << " Soal no.12 " << endl;
    cout << " --------------- " << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "Celcius \t Fahremheit \t Keterangan" << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    for(c = 100; c >= -45; c--) {
    f = ((9.0/5)*c)+32;
    if(c == 100) {
    printf("%d \t\t %.1f \t\t Air Mendidih \n",c, f);
    } else if(c == 40) {
    printf("%d \t\t %.1f \t\t Air Mandi Panas \n",c, f);
    } else if(c == 37) {
    printf("%d \t\t %.1f \t\t Temperatur Tubuh \n",c, f);
    } else if(c == 30) {
    printf("%d \t\t %.1f \t\t Cuaca Pantai\n",c, f);
    } else if(c == 21) {
    printf("%d \t\t %.1f \t\t Temperatur Ruangan \n",c, f);
    } else if(c == 10) {
    printf("%d \t\t %.1f \t\t Hari Yang Dingin \n",c, f);
    } else if(c == 0) {
    printf("%d \t\t %.1f \t\t Titik Beku Air \n",c, f);
    } else if(c == -18) {
    printf("%d \t\t %.1f \t\t Cuaca Dingin Bersalju \n",c, f);
    } else if(c == -40) {
    printf("%d \t\t %.1f \t\t Cuaca Sangat Dingin Bersalju \n",c, f);
    cout << "------------------------------------------------------------------------------" << endl;
    }
    }


    return 0;
}


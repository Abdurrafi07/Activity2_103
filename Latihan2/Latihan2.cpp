#include <iostream>
using namespace std;

float persegipanjang(float p, float l) {
    return p * l;
}

float lingkaran(float r) {
    return 3.14 * r * r;
}

float segitiga(float a, float t) {
    return 0, 5 * a * t;
}

int main()
{
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;
    do {
        cout << "\n\n=========================";
        cout << "\t M E N U";
        cout << "\n=========================\n";

        cout << "1. Luas Persegi Panjang";
        cout << "\n2. Luas Lingkaran";
        cout << "\n3. Luas Segitiga";
        cout << "\n4. Keluar";

        cout << "\n\nMasukan pilihan (1/2/3/4) : ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << "\n\nMasukan panjang : ";
            cin >> panjang;
            cout << "\nMasukan lebar : ";
            cin >> lebar;
            cout << "\nLuas Persegi Panjang = " << persegipanjang(panjang, lebar);
            break;

        case 2:
            cout << "\n\nMasukan jari-jari : ";
            cin >> jejari;
            cout << "\nLuas Lingkaran = " << lingkaran(jejari);
            break;

        case 3:
            cout << "\n\nMasukan Alas : ";
            cin >> alas;
            cout << "\nMasukan Tinggi : ";
            cin >> tinggi;
            cout << "\nLuas Segitiga = " << segitiga(alas, tinggi);
            break;

        case 4:
            break;

        default:
            cout << "Pilihan Salah !!";
            break;

        }

    } while (pilihan != 4);
}

#include <iostream>
using namespace std;

int main() {
    double sayi1, sayi2;
    char islem;
    double sonuc;

    cout << "=== Basit Hesap Makinesi ===" << endl;
    cout << "Islemler: +  -  *  /" << endl;

    cout << "Birinci sayiyi gir: ";
    cin >> sayi1;

    cout << "Islem sec (+, -, *, /): ";
    cin >> islem;

    cout << "Ikinci sayiyi gir: ";
    cin >> sayi2;

    switch (islem) {
    case '+':
        sonuc = sayi1 + sayi2;
        cout << "Sonuc: " << sonuc << endl;
        break;
    case '-':
        sonuc = sayi1 - sayi2;
        cout << "Sonuc: " << sonuc << endl;
        break;
    case '*':
        sonuc = sayi1 * sayi2;
        cout << "Sonuc: " << sonuc << endl;
        break;
    case '/':
        if (sayi2 != 0)
            cout << "Sonuc: " << sayi1 / sayi2 << endl;
        else
            cout << "Hata: 0'a bolunemez!" << endl;
        break;
    default:
        cout << "Gecersiz islem girdin!" << endl;
    }

    return 0;
}

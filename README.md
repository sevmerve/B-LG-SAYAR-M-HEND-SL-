#include <iostream>

// C++ En Basit Hesap Makinesi
int main() {
    double x, y; // Sayıları tutacak değişkenler (float yerine double daha yaygındır)
    char islem;  // İşlem işaretini tutacak değişken

    std::cout << "--- Basit Hesap Makinesi (C++) ---\n";

    // 1. Kullanıcıdan ilk sayıyı al
    std::cout << "Ilk sayiyi gir: ";
    std::cin >> x;

    // 2. Kullanıcıdan işlemi al
    std::cout << "Islemi gir (+, -, *, /): ";
    std::cin >> islem;

    // 3. Kullanıcıdan ikinci sayıyı al
    std::cout << "Ikinci sayiyi gir: ";
    std::cin >> y;

    // 4. Sonucu hesapla ve göster (if/else if yapısı ile)
    if (islem == '+') {
        std::cout << "Sonuc: " << x + y << "\n";
    }
    else if (islem == '-') {
        std::cout << "Sonuc: " << x - y << "\n";
    }
    else if (islem == '*') {
        std::cout << "Sonuc: " << x * y << "\n";
    }
    else if (islem == '/') {
        // Sıfıra bölme kontrolü (çok basit hali)
        if (y != 0) {
            std::cout << "Sonuc: " << x / y << "\n";
        } else {
            std::cout << "Hata: Sifira bolme yapilamaz!\n";
        }
    }
    else {
        // Geçersiz işlem girilirse
        std::cout << "Hata: Gecersiz islem girdiniz!\n";
    }

    // Programı sonlandır
    return 0;
}

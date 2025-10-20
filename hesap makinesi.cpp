#include <iostream>

// C++ En Basit Hesap Makinesi
int main() {
    double x, y; // Sayýlarý tutacak deðiþkenler (float yerine double daha yaygýndýr)
    char islem;  // Ýþlem iþaretini tutacak deðiþken

    std::cout << "--- Basit Hesap Makinesi (C++) ---\n";

    // 1. Kullanýcýdan ilk sayýyý al
    std::cout << "Ilk sayiyi gir: ";
    std::cin >> x;

    // 2. Kullanýcýdan iþlemi al
    std::cout << "Islemi gir (+, -, *, /): ";
    std::cin >> islem;

    // 3. Kullanýcýdan ikinci sayýyý al
    std::cout << "Ikinci sayiyi gir: ";
    std::cin >> y;

    // 4. Sonucu hesapla ve göster (if/else if yapýsý ile)
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
        // Sýfýra bölme kontrolü (çok basit hali)
        if (y != 0) {
            std::cout << "Sonuc: " << x / y << "\n";
        } else {
            std::cout << "Hata: Sifira bolme yapilamaz!\n";
        }
    }
    else {
        // Geçersiz iþlem girilirse
        std::cout << "Hata: Gecersiz islem girdiniz!\n";
    }

    // Programý sonlandýr
    return 0;
}

#include <iostream>

// C++ En Basit Hesap Makinesi
int main() {
    double x, y; // Say�lar� tutacak de�i�kenler (float yerine double daha yayg�nd�r)
    char islem;  // ��lem i�aretini tutacak de�i�ken

    std::cout << "--- Basit Hesap Makinesi (C++) ---\n";

    // 1. Kullan�c�dan ilk say�y� al
    std::cout << "Ilk sayiyi gir: ";
    std::cin >> x;

    // 2. Kullan�c�dan i�lemi al
    std::cout << "Islemi gir (+, -, *, /): ";
    std::cin >> islem;

    // 3. Kullan�c�dan ikinci say�y� al
    std::cout << "Ikinci sayiyi gir: ";
    std::cin >> y;

    // 4. Sonucu hesapla ve g�ster (if/else if yap�s� ile)
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
        // S�f�ra b�lme kontrol� (�ok basit hali)
        if (y != 0) {
            std::cout << "Sonuc: " << x / y << "\n";
        } else {
            std::cout << "Hata: Sifira bolme yapilamaz!\n";
        }
    }
    else {
        // Ge�ersiz i�lem girilirse
        std::cout << "Hata: Gecersiz islem girdiniz!\n";
    }

    // Program� sonland�r
    return 0;
}

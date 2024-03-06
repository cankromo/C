#include <stdio.h>

int main() {
    char character = 'C';
    int tam_sayi = 5;
    float ondalikli_sayi = 5.5;
    long long buyuk_tam_sayi = 1000000000000000000;

    printf("karakter değişkeninin değeri: %c, karakter değişkeninin adresi: %p\n", character, (void *)&character);
}
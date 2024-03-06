#include <stdio.h>  
#include <string.h>
struct PersonalData {
    int Yas;
    float maas;
    char isim[20];
    char Cinsiyet[8];


};

int main() {
    struct PersonalData person1;
    person1.Yas = 25;
    person1.maas = 5000.00;
    strcpy(person1.isim, "Ali");
    strcpy(person1.Cinsiyet, "Erkek");

    printf("Yas: %d\n", person1.Yas);
    printf("Maas: %.2f\n", person1.maas);
    printf("Isim: %s\n", person1.isim);
    printf("Cinsiyet: %s\n", person1.Cinsiyet);

    return 0;

    struct PersonalData person2 = {30, 6000.00, "Ayse", "Kadin"};
    
}

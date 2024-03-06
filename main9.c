
#include <stdio.h>
#include <math.h>

float Cemberyaricapihesapla(float yaricap);
float Cembercevresihesapla(float yaricap);
float Cemberalanihesapla(float yaricap);
float yaricap= 0;
int main() {
    printf("Cemberin yaricapini giriniz: ");
    scanf("%f", &yaricap);

    float cap, cevre, alan;
    cap = Cemberyaricapihesapla(yaricap);
    cevre = Cembercevresihesapla(yaricap);
    alan = Cemberalanihesapla(yaricap);

    printf("Cemberin capi: %f\n", cap);
    printf("Cemberin cevresi: %f\n", cevre);
    printf("Cemberin alani: %f\n", alan);

    return 0;
}

float Cemberyaricapihesapla(float yaricap) {
    return 2 * yaricap;
}

float Cembercevresihesapla(float yaricap) {
    #include <math.h>

    return 2 * 3,14 * yaricap;
}

float Cemberalanihesapla(float yaricap) {
    #include <math.h>

    return 3,14 * yaricap * yaricap;
}

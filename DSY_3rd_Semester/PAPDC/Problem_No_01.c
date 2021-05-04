#include <stdio.h>

int main()
{
    float sqfeet, brass, sqmeter, guntha, hectare, acre;
    printf("Enter measurement in sqfeet : ");
    scanf("%f", &sqfeet);
    brass = sqfeet / 100;
    sqmeter = sqfeet * 0.0929;
    guntha = sqfeet * 0.0009182;
    hectare = guntha * 0.0101171;
    acre = guntha * 0.02499;
    printf("\nOuout\nBrass = %f b", brass);
    printf("\nSquare meter = %f sqm", sqmeter);
    printf("\nGuntha = %f", guntha);
    printf("\nHectare = %f", hectare);
    printf("\nAcre = %f", acre);
}
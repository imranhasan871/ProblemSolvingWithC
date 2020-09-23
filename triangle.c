#include <stdio.h>
#include <math.h>

int main(){

    float A, B,h, C, Area, Perimetro;
    scanf("%f %f %f",&A, &B, &C);

    if (((A + B) > C) && ((B + C) > A) && (C + A) > B)
    {
        Perimetro = (A + B + C);
        printf("Perimetro = %.1f",Perimetro);
    }
    else
    {
        Area = (((A + B) * C)/2);
        printf("Area = %.1f",Area);
    }

    return 0;

}
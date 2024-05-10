#include <stdio.h>
#include "pocotexto.h"

void queso (){
    printf("--Ahorro--\nIngrese los datos de manera que:\nEl valor 1 sea los meses a ahorrar.\nEL valor 2 sea el monto mensual.\nEl valor 3 sean los intereses.");
}

float leer (int a){
    float x;
    printf("Ingrese el valor de %i:",a);
    scanf("%f",&x);
    while (x<=0)
    {
        printf("Ingrese una cantidad valida:");
        scanf("%f",&x);
    }
    return x;
}

float pikachu (float i){
    float interesmes;
    interesmes=i/12;
    return interesmes;
}

void mostrar (int mes, float monto, float intmes){
    float montomes, i, itotal=0;
    montomes=monto;
    i=montomes*intmes;
    for (int k = 0; k < mes; k++)
    {
        printf("\n-~-~-Mes %i-~-~-\n",k+1);
        itotal=itotal+i;
        montomes=montomes+i;
        printf("Monto ahorrado: %f\n",montomes);
        montomes=montomes+monto;
        printf("Ganancias: %f\n",i);
        i=montomes*intmes;
    }
    printf("Inversion: %f \nAhorro: %f \nDevolucion total: %f",mes*monto,montomes-monto,itotal);
}
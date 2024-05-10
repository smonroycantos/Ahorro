#include <stdio.h>
#include "pocotexto.h"

void queso (){
    printf("--Ahorro--\nIngrese los datos de manera que:\nEl valor 1 sea los meses a ahorrar.\nEL valor 2 sea el monto mensual.\nEl valor 3 sean los intereses.");
}

float leer (int a){
    float x;
    printf("\nIngrese el valor %i:",a);
    scanf("%f",&x);
    while (x<=0)
    {
        printf("Ingrese una cantidad valida:");
        scanf("%f",&x);
    }
    return x;
}

float pikachu (float i){
    float intmes;
    intmes=i/12;
    return intmes;
}

void mostrar (int mes, float monto, float intmes){
    float montomes, ganancias, itotal=0;
    montomes=monto;
    for (int k = 0; k < mes; k++)
    {       
        printf("\n-~-~-Mes %i-~-~-\n",k+1);
        ganancias=montomes*(intmes/100);
        itotal=itotal+ganancias;
        printf("| Monto Ahorrado | Ganancias | Inversion\n");
        printf("| %.2f      | %.2f | %.2f\n",montomes, ganancias, (mes/monto)+ganancias);
        montomes=montomes+ganancias;
    }
    printf("| Ahorro | Devolucion Total |\n");
    printf("| %.2f | %.2f |\n",montomes-mes*monto, itotal);
}  
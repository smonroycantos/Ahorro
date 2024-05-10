#include <stdio.h>
#include <conio.h>
#include "pocotexto.h"

int main()
{
    int mes;
    float i, monto, intmes;
    queso();
    mes=leer(1);
    monto=leer(2);
    i=leer(3);
    intmes= pikachu(i);
    mostrar(mes, monto, i);

    getch();
    return 0;
}

/* ******
* Función que permita leer sólo S o N y retorne verdadero si fue S o falso si fue N sólo hasta que sea S o N.
* Autor: Zuri
****** */

#include <stdio.h>
#include <ctype.h>


int LeerSN() {

    char cOpcionSN;

    while (1) {

        printf("Ingrese S o N: ");
        scanf(" %c", &cOpcionSN);

        cOpcionSN = toupper(cOpcionSN);

        if (cOpcionSN != 'S' && cOpcionSN != 'N') {

            printf("Error. Solo se permite S o N\n");

        } else if (cOpcionSN == 'S') {

            return 1;

        } else {

            return 0;

        }
    }
}

//Probar [Borrar]

int main() {
    printf("¿Desea continuar?\n");
    
    if (LeerSN()) {
        printf("Elegiste S: Continuar\n");
    } else {
        printf("Elegiste N: Salir\n");
    }

    return 0;
}
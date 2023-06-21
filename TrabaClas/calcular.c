#include <stdio.h>
#include <string.h>

void SumaArreglo (float* arreglo, float* arreglo2, int* tamaneo, float* suma){
    for (int i = 0; i < *tamaneo; i++){
        *suma = *arreglo + *arreglo2;
        suma++;
        arreglo++;
        arreglo2++;
    }
}


void Cadenacom(char *cadena, char *cadena2, int *com){
    int i = 0;
    while (*cadena != '\0' && *cadena2 != '\0')
    {
        if (*cadena != *cadena2){
            printf("Hay erro en la palabra %d", i);
            *com+=1;  
        }
        cadena++;
        cadena2++;
        i+=1;
    }
    
    
}
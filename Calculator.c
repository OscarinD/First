#include <stdio.h>

int suma(int a, int b);
int resta(int a, int b);
float divi(int a, int b);
int multi(int a,int b);
int pote(int a,int b);

int main (){
    int a=0;
    int b=0;
    int aux=0;
    int opc=0;
    printf("Elige la opción:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Division\n");
    printf("4. Multiplicacion\n");
    printf("5. Potencia\n");
    scanf("%d",&opc);
    switch(opc){
        case 1:
        scanf("%i %i",&a,&b);
        aux=suma(a,b);
        printf("El resultado de la suma es: %d",aux); 
        break;
        case 2:
        scanf("%i %i",&a,&b);
        aux=resta(a,b);
        printf("El resultado de la resta es: %d",aux); 
        break;
        case 3:
        scanf("%i %i",&a,&b);
        aux=divi(a,b);
        printf("El resultado de la division es: %d",aux); 
        break;
        case 4:
        
        break;
        case 5:
        break;
        default:
        break;
    }
}

int suma(int a, int b){
    return a+b;
}

int resta(int a, int b){
    return a-b;
}

float divi(int a, int b){
    return a/b;
}

int multi(int a, int b){
    return a*b;
}

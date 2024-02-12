#include <stdio.h>

int suma(int a, int b);
int resta(int a, int b);
float divi(int a, int b);
int multi(int a,int b);
int pote(int x,int n);

int main (){
    int a=0;
    int b=0;
    int sum=0;
    int res=0;
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
        sum=suma(a,b);
        printf("El resultado de la suma es: %d",sum); 
        break;
        case 2:
        scanf("%i %i",&a,&b);
        res=resta(a,b);
        printf("El resultado de la suma es: %d",res); 
        break;
        case 3:
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
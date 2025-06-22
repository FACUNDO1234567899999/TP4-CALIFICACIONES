#include <stdio.h>

int main()
{
float peso; 
float altura;  

    printf("Ingrese el peso en kg: ");
    scanf("%f",&peso);
     while (peso <= 0 ) {                
        printf("ERROR!Debe ser un número positivo.Intente de nuevo.\nIngrese el peso en kg: ");
        scanf("%f", &peso);
    }
     printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);
    while (altura <= 0 ) {                
        printf("ERROR!Debe ser un número positivo.Intente de nuevo.\nIngrese la altura en metros: ");
        scanf("%f", &altura);
    }
     float idc=peso/(altura*altura);
     if(idc>=30){
     printf("\nResultado:Obesidad\n\n");
     }
     if(25<=idc && idc<=29.9){
     printf("\nResultado:Sobrepeso\n\n");}
     if(18<=idc && idc<=24.9){
     printf("\nResultado:Normal\n\n");}
     if( idc<17.9){
     printf("\nResultado:Bajo peso\n\n");}
     printf("Su índice de masa corporal es: %.2f\n\nÍndice | Condición\n-----------------------------\n<18.5 | Bajo peso\n18.5 a 24.9 | Normal\n25.0 a 29.9 | Sobrepeso\n>=30| Obesidad",idc);

    return 0;
}
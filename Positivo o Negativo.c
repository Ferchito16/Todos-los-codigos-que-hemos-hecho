/*Realizar un programa el cual debera realizar la suma de todos los numeros positivos y negativos que el 
usuario le tecle y el programa terminara cuando el usuario digite 0 todo esto utilizando la estructura de control
while*/

#Include <stdio.h>

main(){
       printf("Calcula la suma de numeros positivos y negativos: \n");
       int i=0,sumap=0,suman=0, numero;
       while(numero!=0){
           printf("Ingresa un numero: \n");
           scanf("%d",&numero);
           if(numero>0){
              sumap=sumap+1;
              i=i+!;
           }
           else if(numero<0){
                suman=suman+1;
                i=i+1;
           }
       }
       printf("La suma de positivos es: %d \n",sumap);
       printf("La suma de negativos es: %d \n",suman);
}
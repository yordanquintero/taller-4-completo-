#include <stdlib.h>
#include <stdio.h>
struct empleado{
char nombre[20];
float salario;

}emple[100];
void ingresar_empleados(empleado emple[]);
void imprimir(empleado emple[]);
float mayor=0;
float menor=999999;
int posmayor,posmenor;
int empleadon;


int main(){
  ingresar_empleados(emple);
imprimir(emple);
    return 0;
}

//ingresando usuarios
void ingresar_empleados(empleado emple[]){
     int numempleados;
   printf("ingrese el numero de empleados: ");
   scanf("%d",&numempleados);
    for(int i=0;i<numempleados;i++){
            printf("---------------------------------------------\n");
            printf("EMPLEADO #%d\n",i+1);
            printf("%d.ingrese su nombre: ",i+1);
            fflush(stdin);
            fgets(emple[i].nombre,20,stdin);
            printf("%d.digite su salario: ",i+1);
            scanf("%f",&emple[i].salario);
            //sacar el mayor salario
            if(emple[i].salario>mayor){
                mayor=emple[i].salario;
                posmayor=i;
            }
            //sacando el menor salario
             if(emple[i].salario<menor){
                menor=emple[i].salario;
                posmenor=i;
            }
    }
}
//imprimiendo el menor y el mayor salario
void imprimir(empleado emple[]){
       printf("---------------------------------------------\n");
            printf("el empleado con mayor salario es:\n");
            printf("nombre:%s",emple[posmayor].nombre);
            printf("salario:%f",emple[posmayor].salario);
  printf("\n---------------------------------------------\n");
            printf("el empleado con menor salario es:\n");
            printf("nombre:%s",emple[posmenor].nombre);
            printf("salario:%f",emple[posmenor].salario);
    printf("\n---------------------------------------------\n");
}

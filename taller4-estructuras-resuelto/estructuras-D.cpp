#include <stdlib.h>
#include <stdio.h>

struct promedio{
float nota1,nota2,nota3;

};
struct alumno{
char nombre[20];
char sexo[10];
int edad;
struct promedio prom;

}alumno;
float promedio2;
void pedirdatos();
void mostrardatos();

int main(){
pedirdatos();
mostrardatos();
    return 0;
}
//pidiendole los datos al alumno
void pedirdatos(){
printf("ingrese el nombre: ");
fgets(alumno.nombre,20,stdin);
printf("ingrese la edad: ");
scanf("%d",&alumno.edad);
fflush(stdin);
printf("ingrese el sexo: ");
fgets(alumno.sexo,10,stdin);
printf("--------------------------\n");
printf("NOTAS DEL ALUMNO\n");
printf("ingrese la nota 1: ");
scanf("%f",&alumno.prom.nota1);
printf("ingrese la nota 2: ");
scanf("%f",&alumno.prom.nota2);
printf("ingrese la nota 3: ");
scanf("%f",&alumno.prom.nota3);
printf("--------------------------\n");
promedio2=(alumno.prom.nota1+alumno.prom.nota2+alumno.prom.nota3)/3;

}
//imprimiendo los datos del alumno
void mostrardatos(){
printf("DATOS DEL ALUMNO\n");
 printf("nombre: %s",alumno.nombre);
 printf("edad: %d\n",alumno.edad);
 printf("sexo: %s\n",alumno.sexo);
 printf("promedio: %.1f",promedio2);
printf("\n--------------------------\n");
}

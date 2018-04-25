#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct canciones{
char artista[30];
char titulo[30];
int duracion;
int tamano;

}cancion[100];
int numcancion=0,opcion,pos;
char buscar[30];
void menu();
void crear_cancion();
void mostrar_canciones();
void buscar_cancion();

int m;

int main(){
    menu();
    return 0;
}
//el menu
void menu(){
    printf("almacenar canciones en formato MP3\n");
    printf("---------------------------\n");
 do{
       printf("MENU\n");
		printf("1. añadir cancion\n");
		printf("2. Mostrar el titulo de todas las canciones\n");
		printf("3. buscar cancion\n");
		printf("0. Salir\n");
		printf("Ingrese una opcion: ");
		scanf("%d",&opcion);
		switch(opcion){
			case 1: crear_cancion();
				break;
			case 2: mostrar_canciones();
				break;
			case 3: buscar_cancion();
				break;
			case 0: exit(0);
				break;
			default: printf("Opcion invalidad\n");
		}
    }while(opcion!=0);

}
//creando la cancion
void crear_cancion(){
    printf("---------------------------\n");
printf("ingrese los datos de la cancion\n");
fflush(stdin);
printf("artista: ");
fgets(cancion[numcancion].artista,30,stdin);
printf("titulo: ");
fgets(cancion[numcancion].titulo,30,stdin);
printf("duracion en segundos: ");
scanf("%d",&cancion[numcancion].duracion);
printf("tamaño en KB: ");
scanf("%d",&cancion[numcancion].tamano);
numcancion++;
printf("---------------------------\n");
}
//mostrando la lista de las canciones
void mostrar_canciones(){
    printf("\n---------------------------\n");
    printf("lista de las canciones\n");
for(int i=0;i<numcancion;i++){
    printf("%d.%s",i+1,cancion[i].titulo);
}
 printf("---------------------------\n");
}
//buscando la cancion con el titulo o el artista
void buscar_cancion(){
    fflush(stdin);
    printf("ingrese el artista o el titulo de la cancion a buscar: ");
    fgets(buscar,30,stdin);
for(int i=0;i<numcancion;i++){
if(strcmp (buscar,cancion[i].titulo)!=0){
m=0;
}
if(strcmp (buscar,cancion[i].titulo)==0){
pos=i;
m=1;
}else{

if(strcmp (buscar,cancion[i].artista)==0){
pos=i;
m=1;
}
}
}
if(m==1){
//imprimiendo la cancion encontrada
printf("\n---------------------------\n");
printf("artista: %s",cancion[pos].artista);
printf("titulo: %s",cancion[pos].titulo);
printf("duracion(en segundos):%d\n",cancion[pos].duracion);
printf("tamaño en KB :%d",cancion[pos].tamano);
 printf("\n---------------------------\n");
}
if(m==0){
    printf("\n---------------------------\n");
    printf("no encontrada\n");
printf("---------------------------\n");


}
}




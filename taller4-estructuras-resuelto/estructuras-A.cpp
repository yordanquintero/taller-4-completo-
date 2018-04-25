#include <stdlib.h>
#include <stdio.h>

void ingresarcorredor();
void organizarcategoria();
void mostrar();
char categoria[10];
struct corredor{
char nombre[30];
int edad;
char sexo[10];
char club[20];

}corredor1;
char infantil[]="infantil";
char joven[]="joven";
char mayor[]="mayor";


int main(){
ingresarcorredor();
organizarcategoria();
mostrar();

    return 0;
}


//ingreso de datos
void ingresarcorredor(){
    printf("ingrese los datos del corredor\n");
    printf("---------------------------\n");
printf("nombre: ");
fgets(corredor1.nombre,30,stdin);
printf("edad: ");
scanf("%d",&corredor1.edad);
fflush(stdin);
printf("sexo: ");
fgets(corredor1.sexo,10,stdin);
fflush(stdin);
printf("club: ");
fgets(corredor1.club,20,stdin);
    printf("---------------------------\n");
}
//poniendo la categoria segun su edad
void organizarcategoria(){

        for(int i=0;i<8;i++){
    if(corredor1.edad<=15){
    categoria[i]=infantil[i];
        }else{
         if(corredor1.edad<=30){
    categoria[i]=joven[i];
        }else{
         if(corredor1.edad>30){
    categoria[i]=mayor[i];
        }
        }
        }
}
}
//imprimiendo con la categoria
void mostrar(){
printf("\n---------------------------\n");
printf("DATOS PERSONA\n");
printf("nombre: %s",corredor1.nombre);
printf("edad: %d\n",corredor1.edad);
printf("sexo: %s",corredor1.sexo);
printf("club: %s",corredor1.club);
printf("categoria: %s",categoria);
printf("\n---------------------------\n");
}


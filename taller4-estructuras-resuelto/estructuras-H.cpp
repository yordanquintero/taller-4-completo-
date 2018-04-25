#include <stdio.h>
#include <stdlib.h>
//estructura
struct proveedores{
char nombre[30];
int cantidadvendida;
float preciounitario;
float importe;

}proveedor[30],masbarato,mascaro;

int nump;
//prototipos de funciones
void llenar_proveedores(proveedores[],int);
void mostrar_proveedores(proveedores[],int);
proveedores buscarmascaro(proveedores proveedor[],int nump);
proveedores buscarmasbarato(proveedores proveedor[],int nump);
void mostrar_provedore_caros_baratos(proveedores);


int main(){

llenar_proveedores(proveedor,nump);
mostrar_proveedores(proveedor,nump);
mascaro=buscarmascaro(proveedor,nump);
masbarato=buscarmasbarato(proveedor,nump);
  printf("-------------------------\n");
printf("PROVEEDOR MAS CARO\n");
mostrar_provedore_caros_baratos(mascaro);
 printf("-------------------------\n");
 printf("PROVEEDOR MAS BARATO\n");
 mostrar_provedore_caros_baratos(masbarato);
 printf("-------------------------\n");

  return 0;
}
//llenar la tabla de proveedores
void llenar_proveedores(proveedores[],int){
 printf("ingrese la cantidad de proveedores: ");
    scanf("%d",&nump);
    for(int i=0;i<nump;i++){
        printf("-------------------------\n");
        printf("proveedor #%d\n",i+1);
        fflush(stdin);
        printf("nombre: ");
        fgets(proveedor[i].nombre,30,stdin);
        printf("cantidad  vendida: ");
        scanf("%d",&proveedor[i].cantidadvendida);
        printf("precio unitario: ");
        scanf("%f",&proveedor[i].preciounitario);
        //sacar el importe de cada proveedor
        proveedor[i].importe=proveedor[i].preciounitario*proveedor[i].cantidadvendida;
    }
}
//mostrando la lista de todos los proveedores
void mostrar_proveedores(proveedores[],int){
    printf("-------------------------\n");
    printf("MOSTRANDO PROVEEDORES\n");
 for(int i=0;i<nump;i++){
printf("\nPROVEEDOR #%d\n",i+1);
printf("nombre: %s",proveedor[i].nombre);
printf("cantidad vendida: %d\n",proveedor[i].cantidadvendida);
printf("precio unitario: %.f\n",proveedor[i].preciounitario);
printf("importe: %.f\n",proveedor[i].importe);
 }
 printf("-------------------------\n");

}
//funcion para buscar el proveedor mas caro
proveedores buscarmascaro(proveedores proveedor[],int nump){
proveedores mascaro=proveedor[0];
for(int i=1;i<nump;i++){

    if(proveedor[i].preciounitario>mascaro.preciounitario){
        mascaro=proveedor[i];
    }
}
return mascaro;
}
//funcion para buscar el proveedor mas barato
proveedores buscarmasbarato(proveedores proveedor[],int nump){
proveedores masbarato=proveedor[0];
for(int i=1;i<nump;i++){
 if(proveedor[i].preciounitario<masbarato.preciounitario){
    masbarato=proveedor[i];
 }
}

return masbarato;
}
//funcion para mostrar el proveedor mas caro o el mas barato
void mostrar_provedore_caros_baratos(proveedores proveedor){
 printf("nombre: %s",proveedor.nombre);
 printf("cantidad vendida: %d\n",proveedor.cantidadvendida);
 printf("precio Unitario: %.f\n",proveedor.preciounitario);
printf("Importe: %.f\n",proveedor.importe);
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    struct alumno{
        char nombre[20];
        char direccion[20];
        char carrera[20];
        int edad;
        float promedio;
    } ;
    
    struct alumno al[5];
    for(int i = 0; i < 2; i++){
        printf("Alumno %d \n", i + 1);
        printf("Ingrese el nombre del alumno: ");
        gets(al[i].nombre);
        printf("Ingrese la direccion del alumno: ");
        gets(al[i].direccion);
        printf("Ingrese la carrera que cursa el alumno: ");
        gets(al[i].carrera);
        printf("Ingrese la edad del alumno: ");
        scanf("%d", &al[i].edad);
        printf("Ingrese el promedio que obtuvo el alumno: ");
        scanf("%f", &al[i].promedio);
        getchar();
        printf("\n");
    } 
    printf("Datos de los alumnos ingresados \n");
    for(int i = 0; i < 2; i++){
        printf("Alumno %d: \n", i + 1);
        puts(al[i].nombre);
        puts(al[i].direccion);
        puts(al[i].carrera);
        printf("%d\n", al[i].edad);
        printf("%.2f\n", al[i].promedio);
    }
    return 0; 
}

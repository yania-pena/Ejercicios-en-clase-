/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    char nombre [10],desP1[10],desP2[10];
    int cedula;
    float cantP1,cantP2,precioP1,precioP2,subtotal=0,iva,total=0,pVtaP1=0,pVtaP2=0;
    printf("Ingrese el nombre del cliente");
    scanf("%s",&nombre);
    printf("Ingrese la cédula:");
    scanf("%d"&cedula);
    
    printf("Datos del Producto1\n");
    printf("Ingrese la descripcion:");
    scanf("%s",&desP1);
    printf("Ingrese la cantidad:");
    scanf("%f",&cantP1);
    printf("Ingrese el precio:");
    scanf("%f",&precioP1);
    
    printf("Datos del Producto2\n");
    printf("Ingrese la descripcion:");
    scanf("%s",&desP2);
    printf("Ingrese la cantidad:");
    scanf("%f",&cantP2);
    printf("Ingrese el precio:");
    scanf("%f",&precioP2);
    
    pVtaP1=cantP1*precioP1;
    pVtaP2=cantP2*precioP2;
    subtotal=pVtaP1+pVtaP2;
    iva=subtotal*0.12;
    total=subtotal+iva;
    
    printf("******Empresa XYZ******");
    printf("cliente:%s\n",nombre);
    printf("cedula:%d\n",cedula);
    printf("Descripcion \tcantidad\tprecio \t P de venta \n");
    printf("%s\t %.2f \t %.2f \t %.2f \n ", desP1, cantP1, precioP1,precioP1);
    printf("%s \t %.2f \t %.2f \t %.2f \n ", desP2, cantP2, precioP2, pVtaP2);

    printf("\t\t subtotal: %.2f\n", subtotal);
    printf("\t\t subtotal: %.2f\n", iva);
    printf("\t\t subtotal: %.2f\n", total);
}
    



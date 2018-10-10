#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main (void)

{

    int modulo,num,elev;
	printf("Introduce el numero: ");
	scanf("%d",&num);
	modulo=num%2;
	
	if(modulo==0)
    {
                 printf("\n El numero es par");
                 elev=pow(num,2);
                 printf("\n El numero elevado al cuadrado es: %d ", elev);
                 
                 }
                 
                 else
                 {
                     printf("\n El numero es impar");
                     elev=pow(num,3);
                     printf("\n El numero elevado al cubo es: %d ", elev);
                     }
                     
                     getch();
                     return 0;
                     
                     }

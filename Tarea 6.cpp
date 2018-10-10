#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main ()

{
    int n;
    printf("Introduce el numero\n");
    scanf("%d",&n);
    
    if (n%2==0)
    {
               printf("%d es par", n);
               }
               
               else
               {
                   printf("%d es impar", n);
                   }
                   
                   getch();
                   return 0;
                   }
                   
    

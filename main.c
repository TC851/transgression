//transgression data types

#include <stdio.h>
#include <limits.h>


int main(){
    
    int x,y,summe;
    
    
    printf("Programm Bereichsüberschreitungen \n");
    
    printf("Geben Sie bitte zwei Integerzahlen ein: x,y \n");
    scanf("%i%i",&x,&y);
    
    summe = x + y;
    
    printf("Die Summme von x und y beträgt: %i \n",summe);
    printf("int Grösse: %lu Byte \n",sizeof(int));
    printf("Der Wertebereich beinhaltet %i bis %i \n",INT_MIN,INT_MAX);
    
    return 0;
    
}




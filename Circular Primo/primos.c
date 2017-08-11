#include <stdio.h>

int main(int argc, const char * argv[]) {
    int numero, i;
    char es_primo = 1;
    
    i = 2;
    
    printf("Introduce un número: ");
    fflush(stdout);
    scanf("%d", &numero);
    
    while( i<=numero/2 && es_primo==1 ) {
        //printf("Comprobando si es divisible entre %d.\n", i);
        if( numero % i == 0 ) {
            printf("%d es divisible por el numero %d, por lo tanto no es primo.\n", numero, i);
                   es_primo = 0;
                            }
        
                    i++;
        
                    //return 0 ;
        
                     }
    
    
                if(es_primo)
                   printf("%d es número primo.\n", numero);
                   printf("Inserte ahora el mismo numero, pero con el ultimo digito al inicio: ");
    
                    fflush(stdout);
                    scanf("%d", &numero);
                    while( i<=numero/2 && es_primo==1 ) {
                    //printf("Comprobando si es divisible entre %d.\n", i);
                        if( numero % i == 0 ) {
                            printf("%d es divisible por el numero %d, por lo tanto no es primo.\n", numero, i);
                            es_primo = 0;
                                                }
        
                                        i++;
                                                        }
    
                        if(es_primo)
                           printf("%d tambien es número primo.\n", numero);
                           //printf(" por lo tanto es un numero primo circular \n");
                            printf("Inserte ahora el mismo numero, pero con el segundo digito al inicio: ");
    
                            fflush(stdout);
                            scanf("%d", &numero);
                                while( i<=numero/2 && es_primo==1 ) {
                                 //printf("Comprobando si es divisible entre %d.\n", i);
                                    if( numero % i == 0 ) {
                                        printf("%d es divisible por el numero %d, por lo tanto no es primo.\n", numero, i);
                                        es_primo = 0;
                                    }
        
                                    i++;
                                                }
    
                                if(es_primo)
                                printf("%d tambien es número primo.\n", numero);
                                printf(" por lo tanto es un numero primo circular \n");

    
                   return 0;
}

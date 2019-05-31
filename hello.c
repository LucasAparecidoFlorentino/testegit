#include <stdio.h>

int main ()
{

    int idade, *p;

    idade = 18; 

    p = &idade; 

    *p = 22;

    idade = (int)p;  

    printf("Olá Mundo !, a idade é %i\n", idade);
    
    printf("O endereço da variavel idade é; %p\n", p);


    return 0;
}

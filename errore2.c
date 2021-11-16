#include <stdio.h>


int elabora(int contatore_parametri, char *parametri[]) {
       char buffer[4];
       strncpy (buffer, parametri[1], sizeof(buffer));
       printf("%s\n" , buffer);
       return 0;
}
//commento: argv e argc possono avere qualsiasi nome, esempio: bimbogigi e goffredo

int main(void); {       
int risultato;
    char array_parametri[] = { "programma", "€" );
    risultato = elabora(2, array_parametri);
return risultato;
}

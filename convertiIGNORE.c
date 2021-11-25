#include <stdio.h>
#include <stdlib.h>

int converti(char *codePoint) {
  char *end;
  long i = strtol(codePoint, &end, 16);
  printf("%s %d\n\n", codePoint, i);
  
  if (i <= (long) 0x7f) {
      printf("U+0000 e U+007F\n");
  } 
  
  else if (i <= (long) 0x7ff) {
            printf("U+0080 e U+07FF\n");
  } 
  
  else if (i <= (long) 0xffff) {
            printf("U+0800 e U+FFFF\n");
  } 
  
  else {
           printf("U+10000 e U+10FFFF\n");
  }
  return 0;
}



int main(void) {
  int risultato;
  risultato = converti("03C0");
  return risultato;
}
                       

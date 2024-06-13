#include <stdio.h>

int main() {
  int i = 1;
  char c =97;
  long int i_long = 130000000;
  double db = 3.14;
  
  printf("int      hat %i Bytes\n", sizeof(i));
  printf("char     hat %i Bytes\n", sizeof(c));
  printf("long int hat %i Bytes\n", sizeof(i_long));
  printf("double   hat %i Bytes\n", sizeof(db));
 
  int *ip = 0;
  double *dbp = 0;
  char *cp = 0;
  
  printf("ip  hat   %i Bytes\n", sizeof(ip));
  printf("dbp hat   %i Bytes\n", sizeof(dbp));
  printf("cp  hat   %i Bytes\n", sizeof(cp));
  
  // Wir schreiben in die spezielle Variable "ip" etwas rein:
  ip = &i;
  
  printf("Inhalt ip: %p\n", ip);
  printf("Inhalt i : %i\n", i);
  printf("      &i : %p\n", &i);
  printf("     *ip : %i\n", *ip);
}
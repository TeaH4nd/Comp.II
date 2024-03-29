/* Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/08/14 02:34:02 $
 * $Log: aula0107.c,v $
 * Revision 1.1  2017/08/14 02:34:02  alexandre.chamon
 * Initial revision
 *
 *
 */

#include <stdio.h>

#define OK							0

int
main ()
{

  printf ("\t\tTipos Basicos combinados com Modificadores de Sinal e com Modificadores de Largura\n\n");
  
  printf ("signed short int:\n\t\t%lu %s\n", sizeof (signed short int), sizeof (signed short int) > 1? "bytes": "byte");
  
  printf ("unsigned short int:\n\t\t%lu %s\n", sizeof (unsigned short int), sizeof (unsigned short int) > 1? "bytes": "byte");
  
  printf ("signed long int:\n\t\t%lu %s\n", sizeof (signed long int), sizeof (signed long int) > 1? "bytes": "byte");
  
  printf ("unsigned long int:\n\t\t%lu %s\n", sizeof (unsigned long int), sizeof (unsigned long int) > 1? "bytes": "byte");

  printf ("signed long long int:\n\t\t%lu %s\n", sizeof (signed long long int), sizeof (signed long long int) > 1? "bytes": "byte");

  printf ("unsigned long long int:\n\t\t%lu %s\n", sizeof (unsigned long long int), sizeof (unsigned long long int) > 1? "bytes": "byte");

  printf ("\n\t\tCombina�coes Invalidas\n");  

  printf("signed short char;\n");
  printf("unsigned short char;\n");
  printf("signed long char;\n");
  printf("unsigned long char;\n");
  printf("signed long long char;\n");
  printf("unsigned long long char;\n");
  printf("signed short float;\n");
  printf("unsigned short float;\n");
  printf("signed long float;\n");
  printf("unsigned long float;\n");
  printf("signed long long float;\n");
  printf("unsigned long long float;\n");
  printf("signed short double;\n");
  printf("unsigned short double;\n");
  printf("signed long double;\n");
  printf("unsigned long double;\n");
  printf("signed long long double;\n");
  printf("unsigned long long double;\n");
  printf("signed short void;\n");
  printf("unsigned short void;\n");
  printf("signed long void;\n");
  printf("unsigned long void;\n");
  printf("signed long long void;\n");
  printf("unsigned long long void\n");

  return OK;

}

/* $RCSfile: aula0107.c,v $ */

/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 *
 * $Author$
 * $Date$
 * $Log$
 */

#include <stdio.h>
#include <stdlib.h>

#define NUMERO_ARGUMENTOS		1

#define OK				0
#define NUMERO_ARGUMENTOS_INVALIDO	1

int 
main (int argc, char *argv [])
{
  unsigned char indice;

  if (argc != NUMERO_ARGUMENTOS)
  {
    printf ("USO: %s\n", argv [0]);
    exit (NUMERO_ARGUMENTOS_INVALIDO);
  }

  for (indice = 0; indice < 255; indice++)
    printf ("%03u\t%02X\t%c\n", indice, indice, indice);

  printf ("%03u\t%02X\t%c\n", indice, indice, indice);

  return OK;
}

/* $RCSfile$ */

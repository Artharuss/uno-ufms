// Este é o código do sevidor

#include <stdio.h>

int carta_atual = 0;

struct Carta{
  char valor;
  char cor;
}

Carta baralho[108]


/*
"5B" // 5 Blue
"+G" // +2 Green
"JW" // Joker
"IY" // Inversao Yellow
"C4" // Joker 4 Cartas
"PR" // Pulante (Bloqueio, perde a vez) Red
*/

// Aqui rola uma geração de deck com todas as cartas

// Aqui rola um shuffle https://stackoverflow.com/questions/6127503/shuffle-array-in-c

// Tem quer os player

// TODO: ter um sevidor aqui https://pt.wikibooks.org/wiki/Programar_em_C/Sockets

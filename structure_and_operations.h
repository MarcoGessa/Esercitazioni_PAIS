//
// Created by Marco Gessa on 11/04/23.
//

#ifndef MIX_PAIS_STRUCTURE_H
#define MIX_PAIS_STRUCTURE_H
//#define DIM 30
#endif //MIX_PAIS_STRUCTURE_H

/*
struct {
    char nome[DIM];
    char cognome[DIM];
} *anagrafica;
*/


struct calcolatrice{
    float x;
    float y;
    float val;
    char ale[];
};


void insert_values();
void calcolo();
void stampa_struttura();
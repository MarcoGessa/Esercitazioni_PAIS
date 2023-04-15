#include "structure_and_operations.h"
#include <stdio.h>


/*
void ma(){

    printf("Nome?");
    //char insert_nome, insert_cognome;
    //char nome = scanf("%s", &insert_nome);
    //char cognome = scanf("%s", &insert_cognome);

    fgets(anagrafica->nome, DIM, stdin);
    fgets(anagrafica->cognome, DIM, stdin);

    //anagrafica.nome = nome;
    //anagrafica.cognome = cognome;
    printf("%s\n", anagrafica->nome);
    printf("%s\n", anagrafica->cognome);

    //printf("%s -> %s customer \n", c.name, c.typeOfCustomer);

}
*/


void stampa(struct calcolatrice);


void insert_values(){
    struct calcolatrice inserts;
    printf("\nInserisci il primo valore: ");
    scanf("%f", &inserts.x);
    printf("Inserisci il secondo valore: ");
    scanf("%f", &inserts.y);

}

void calcolo() {
    struct calcolatrice c1;

    printf("Scegli operazione da eseguire: \n1)Somma, \n2)Sottrazione, \n3)Moltiplicazione, \n4)Divisione");
    int selector;

    scanf("%d", &selector);

    switch(selector){
        case 1: c1.val=c1.x+c1.y;
        break;
        case 2: c1.val=c1.x-c1.y;
        break;
        case 3: c1.val=c1.x*c1.y;
        break;
        case 4: c1.val=c1.x/c1.y;
        break;

        default:
            perror("Non hai selezionato nessuna opzione valida, chiusura programma...");
    }



   // stampa_struttura(c1); //Passato alias che collega a tutta la struttura
}

void stampa_struttura(){
    struct calcolatrice send;
    stampa(send);
}


void stampa(struct calcolatrice stampa){
    printf("Primo valore: %.2f\n", stampa.x);
    printf("Secondo valore: %.2f\n", stampa.y);

    printf("\nValore finale: ");
    printf("%.2f\n", stampa.val);

}

/*
 * Nota: la struttura è sempre la stessa, se l'ho chiamata calcolatrice, a prescindere dagli alias quella è
 * e li i dati vengono memorizzati! Per passare i valori di una struttura ad un altra funzione ti basta
 * dichiarare il suo alias come argomento della funzione.
 */



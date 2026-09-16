#include <stdio.h>
#include <stdlib.h>


int main () {
    printf ("BAKERY\n");
    printf ("101 hot dog R$8,00\n");
    printf ("102 sandwich R$9,00\n");
    printf ("103 burger R$12,00\n");
    printf ("104 coca R$5,00\n\n");

    int product , quantity, order;
    printf ("type the code for the chosen product:\n");
    scanf ("%i" , &product);
    printf ("type the desired quantity:\n");
    scanf ("%i" , &quantity);

    switch (product) {

    case 101:
    printf ("the total cost of the hot dog came to: %i", quantity * 8);
    break;

    case 102:
    printf ("the total cost of the sandwich came to:%i", quantity * 9);
    break;

    case 103:
    printf ("the total cost of the burger came to:%i", quantity * 12);
    break;

    case 104:
    printf ("the total cost of the coca came to:%i", quantity * 5);
    break;

    default:
    printf("Valor inválido!\n");

    }



}

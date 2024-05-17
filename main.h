#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

#define MAX_JELLYFISH 5

// TODO: Create any necessary structs

struct Trident {
    int row;
    int col;
    int prevRow;
    int prevCol;
};

struct Jellyfish {
    int row;
    int col;
    int rd;
    int cd;
};

struct state {
    int nswim;
    struct Jellyfish jellyfishes[MAX_JELLYFISH];
} prev, curr;

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

#endif

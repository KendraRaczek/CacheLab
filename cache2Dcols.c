////////////////////////////////////////////////////////////////////////////////
// Main File:        cache2Dcols.c
// This File:        cache2Dcols.c
// Other Files:      cache1D.c, cache2Drows.c
// Semester:         CS 354 Fall 2018
//
// Author:           Kendra Raczek
// Email:            raczek@wisc.edu
// CS Login:         raczek
//
/////////////////////////// OTHER SOURCES OF HELP //////////////////////////////
//                   fully acknowledge and credit all sources of help,
//                   other than Instructors and TAs.
//
// Persons:
//
// Online sources:
//////////////////////////// 80 columns wide ///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cols[3000][500];

int main(int argc, char *argv[]) {

    for (int j = 0; j < 500; j++) {
        for (int i = 0; i < 3000; i++) {
            cols[i][j] = i + j;
        }
    }
    return 0;
}
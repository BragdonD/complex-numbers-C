#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
#include "ui.h"

bool parseInt(char *str, int* val){
    errno = 0;
    char *temp = NULL;
    long res = strtol(str, &temp, 10);

    ///Test if there is an error in the input and handle it
    if (temp == str || *temp != '\n' ||
        ((res > INT_MAX  || res < INT_MAX ) && errno == ERANGE))
        return false;

    *val = (int) res;
    return true;
}

bool parseDouble(char *str, double* val) {
    errno = 0;
    char *temp = NULL;
    *val = strtod(str, &temp);

    ///Test if there is an error in the input and handle it
    if (*temp == 0)
        return false;
    return true;
}

bool getDouble(double* val) {
    char buffer[500];
    fgets(buffer, 500, stdin);
    return parseDouble(buffer, val);
}

bool getInt(int* val) {
    char buffer[500];
    fgets(buffer, 500, stdin);
    return parseInt(buffer, val);
}


void Menu() {
    printf("Menu :\n");
    printf("1. Add complex numbers.\n");
    printf("2. Sub complex numbers.\n");
    printf("3. Mul complex numbers.\n");
    printf("4. Div complex numbers.\n");
    printf("5. Leave\n");
}

int Choice() {
    int choice = 0;

    printf("Your choice : ");
    
    if(getInt(&choice))
        return choice;
    return -1; ///Error to handle.
}



/**
 * @file main.c
 * @author Thomas DUCLOS
 * @brief This program has for objective to use complex numbers and to do basic arithmetic operations on them.
 * @version 0.1
 * @date 2022-09-17
 * @copyright Copyright (c) 2022
 */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "complex.h"
#include "ui.h"

int main(int argc, char const *argv[])
{
    int choice = 0; ///User's choice of action
    complex a = Init_Complex(0,0); ///Complex number 1
    complex b = Init_Complex(0,0); ///Complex number 2
    ///To be repeat as long as the user do not want to leave or an error occur
    do {
        Menu();
        if( ( choice = Choice() ) == -1)
            return EXIT_FAILURE;
        if( choice != 5 ) {
            a = get_Complex();
            b = get_Complex();
        }
            
        switch (choice)
        {
        case 1: ///Add Complex numbers + print output
            print_Complex(Add_Complexs(a,b));
            break;
        case 2: ///Sub Complex numbers + print output
            print_Complex(Sub_Complexs(a,b));
            break;
        case 3: ///Multiply Complex numbers + print output
            print_Complex(Mul_Complexs(a,b));
            break;
        case 4: ///Divisie Complex numbers + print output
            print_Complex(Div_Complexs(a,b));
            break;
        case 5: ///Leave the program
            break;
        default: ///Wrong input
            printf("Input correspond to 0 proposition in the menu.");
            break;
        }
    } while(choice != 5);
    return 0;
}

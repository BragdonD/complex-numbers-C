#ifndef COMPLEX_H
#define COMPLEX_H

#include <stdbool.h>

typedef struct complex {
    double r_part; ///Real Part of the complex number
    double i_part; ///Imaginary Part of the complex number
} complex;

///Basic operations on complex number
complex Init_Complex(double r_part, double i_part);
complex Add_Complexs(complex a, complex b);
complex Sub_Complexs(complex a, complex b);
complex Mul_Complexs(complex a, complex b);
complex Div_Complexs(complex a, complex b);
void Conj_Complex(complex* a);
bool Equ_Complexs(complex a, complex b);
void print_Complex(complex a);
complex get_Complex();

#endif
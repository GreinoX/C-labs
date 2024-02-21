//
// Created by Thund on 08.02.2024.
//

#include "funcs.h"

void change_values(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

void change_values(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

void get_whole_part(double &a){
    a = (int)a;
}

void get_whole_part(double *a){
    *a = (int) *a;
}

void increase_complex(Complex &z, double &x){
    z.re *= x;
    z.im *= x;
}

void increase_complex(Complex *z, double *x){
    z->re *= *x;
    z->im *= *x;
}

void move_circle_by_vector(Circle &alpha, double &move_x, double &move_y){
    alpha.x += move_x;
    alpha.y += move_y;
}

void move_circle_by_vector(Circle *alpha, double *move_x, double *move_y){
    alpha->x += *move_x;
    alpha->y += *move_y;
}

//отбрастывает от вещестсенного числа дробную часть
//умножает комплексную переменную на второй аргумент процедуры - вещественное число
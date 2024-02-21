//
// Created by Thund on 08.02.2024.
//

#ifndef FIRSTLAB_FUNCS_H
#define FIRSTLAB_FUNCS_H

struct Complex{
    double re = 0;
    double im = 0;

    Complex(double _re, double _im){
        re = _re;
        im = _im;
    }
};

struct Circle{
    double x = 0;
    double y = 0;
    double r = 1;
};

void change_values(int &a, int &b);

void change_values(int *a, int *b);

void get_whole_part(double &a);

void get_whole_part(double *a);

void increase_complex(Complex &z, double &x);

void increase_complex(Complex *z, double *x);

void move_circle_by_vector(Circle &alpha, double &move_x, double &move_y);

void move_circle_by_vector(Circle *alpha, double *move_x, double *move_y);

#endif //FIRSTLAB_FUNCS_H

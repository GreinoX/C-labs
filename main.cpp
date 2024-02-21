#include <iostream>
#include "funcs.h"

int main() {
    Complex z(11, 10);
    Complex z_1(15, 25);
    Circle alpha;

    int a, b;
    double x, y, t;
    double move_x, move_y;
    std::cout << "Input any two digits(int):";
    std::cin >> a >> b;

    std::cout << "Input any two digits with float part:";
    std::cin >> x >> y;

    std::cout << "Input any digit to increase complex number:";
    std::cin >> t;

    std::cout << "Input coordinates of vector:";
    std::cin >> move_x >> move_y;

    change_values(a, b);
    change_values(&a, &b);
    get_whole_part(x);
    get_whole_part(&y);
    increase_complex(z, t);
    increase_complex(&z_1, &t);
    move_circle_by_vector(alpha, move_x, move_y);
    move_circle_by_vector(&alpha, &move_x, &move_y);


    std::cout << "Changed values:" << a << ' ' << b;
    std::cout << '\n' << "Whole part of float numbers: " << x << ' ' << y << '\n';
    std::cout << "Complex number before increase: z(" << 11 << ',' << 10 << ") z_1(" << 15 << ',' << 25 << ')' << '\n';
    std::cout << "Complex number after increase: z(" << z.re << ',' << z.im << ") z_1(" << z_1.re << ',' << z_1.im << ')' << '\n';
    std::cout << "Coordinates of circle before move: (" << 0 << ',' << 0 << ") After move: (" << alpha.x << ',' << alpha.y << ')';
    return 0;
}

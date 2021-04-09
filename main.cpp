// Copyright 2020 Bekina Svetlana
#include <iostream>
#include <exception>
#include <string>
#include "Fraction.h"

int main() {
    Fraction a(1, 5);
    Fraction b(2, 4); 
    Fraction c;
    c = a - b;
    printf("%d/n, c.getValue());
    printf("%d/n, b.getValue());
    printf("%d/n, a.getValue());
    return 0;
}

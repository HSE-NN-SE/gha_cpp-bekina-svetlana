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
    printf("%s/n, c.getValue());
    printf("%s/n, b.getValue());
    printf("%s/n, a.getValue());
    return 0;
}

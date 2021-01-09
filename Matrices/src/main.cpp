#include <iostream>
#include "matrix.h"

int main() {
    std::cout << "Program testing matrices operations" << "\n";
    
    // SUM
    {
        std::cout << "-------------SUM-------------" << "\n";
        Matrix a(3, 3, true);
        a.print(Matrix::REGULAR);
        a.print(Matrix::TRANSPOSE);
        Matrix b(3, 3, true);
        b.print(Matrix::REGULAR);
        Matrix* c = a + b;
        c->print(Matrix::REGULAR);
    }

    // SUBS
    {
        std::cout << "-------------SUBS-------------" << "\n";
        Matrix a(3, 3, true);
        a.print(Matrix::REGULAR);
        Matrix b(3, 3, true);
        b.print(Matrix::REGULAR);
        Matrix* c = a - b;
        c->print(Matrix::REGULAR);
    }

    // MUL
    {
        std::cout << "-------------MUL-------------" << "\n";
        Matrix a(4, 4, true);
        a.print(Matrix::REGULAR);
        Matrix b(4, 4, true);
        b.print(Matrix::REGULAR);
        Matrix* c = a * b;
        c->print(Matrix::REGULAR);
        std::cout << "Size is: " << c->getRows() << " " << c->getCols() << std::endl;
        std::cout << "a matrix determinant is: " << c->getDeterminant() << std::endl;
    }

}


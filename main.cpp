#include <iostream>
#include <cmath>
#include "shape.h"

using namespace std;

void Execute(CShape* pShape)
{
    pShape->Init();
}

int main(int argc, char** argv)
{
    CSquare* pSquare;
    CCircle* pCircle;
    pSquare = new CSquare(string("squareA"), 2.0);
    pCircle = new CCircle(string("circleA"), 1.0);
    Execute(pSquare);
    Execute(pCircle);

    system("pause");
    return 0;
}
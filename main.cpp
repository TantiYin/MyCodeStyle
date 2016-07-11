#include <iostream>
#include <cmath>
#include "shape.h"

using namespace std;

void execute(CShape* pShape)
{
	pShape->Init();
}

int main(int argc,char** argv)
{
	CSquare* pSquare;
	CCircle* pCircle;
	pSquare = new CSquare(string("squareA"), 2.0);
	pCircle = new CCircle(string("circleA"), 1.0);
	execute(pSquare);
	execute(pCircle);

	system("pause");
	return 0;
}
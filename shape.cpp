#include "shape.h"

int CShape::mNumShapes = 0;

void CShape::Init()
{
	mArea = GetArea();
	PrintErea();
}

double CSquare::GetArea()
{
	return mEdge * mEdge;
}

double CCircle::GetArea()
{
	return 3.1415926 * mR * mR;
}
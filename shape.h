#pragma once

#include<iostream>
#include<string>

using namespace std;

class CShape
{
public:
	CShape(string& Name): mName(Name), mArea(0)
	{
		++mNumShapes;
		cout << "There has been " << mNumShapes << " shapes" << endl;
	}
	~CShape() {--mNumShapes;}
	void Init();
	virtual void PrintErea()
	{
		cout << mName << ": " << mArea << endl;
	}
	virtual double GetArea() = 0;
public:
	static int mNumShapes;
private:
	string mName;
	double mArea;
};

class CSquare: public CShape
{
public:
	CSquare(string& Name, double e): CShape(Name), mEdge(e) {}
	virtual double GetArea();
public:
	double mEdge;
};

class CCircle: public CShape
{
public:
	CCircle(string& Name,double R): CShape(Name), mR(R) {}
	virtual double GetArea();
public:
	double mR;
};

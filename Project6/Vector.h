#pragma once
#include <iostream>
using namespace std;
class Vector {
private:
	int cur_size;
	int buf_size;
	double *els;
public:
	//cons-s
	Vector();
	Vector(int size);
	//copy constructor
	Vector(const Vector&obj);
	
	int size()const {
		return cur_size; }
	
	//operators
	Vector operator=(const Vector &obj);
	double& operator[](int index);
	bool operator==(Vector obj);

	//methods
	double& push_back(double e);
	double& at(int index);

	~Vector() { delete[]els; }

	friend ostream& operator<<(ostream& os, Vector v);

	void Vector::operator+(const Vector &obj);

	void Vector::operator-(const Vector &obj);
	bool Vector:: operator!=(Vector obj);

	friend ifstream& operator>>(ifstream& os, Vector v);
};
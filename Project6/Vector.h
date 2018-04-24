#pragma once

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

};
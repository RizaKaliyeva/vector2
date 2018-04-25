#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
	Vector v;
	v.push_back(10);
	v.push_back(2.5);
	v.push_back(4.3);

	for (int i = 0; i < v.size(); i++)
		cout << v.at(i) << endl;
	cout << "\n\n";
	v[0] = 1.8;
	v.at(1) = 5.4;
	
		cout << v << endl;
	
	cout << "Vector v2" << endl;
	Vector v2(v), v1;
	
		cout << v2 << endl;

	v1 = v;
	
		cout << v1<< endl;
	v1.push_back(15);

	cout << (v1 == v) << endl;

	v + v1;
	for (int i = 0; i < 3; i++)
	{
		cout << v[i] << endl;
	}

	system("pause");
	return 0;
}
#include<iostream>
#include"Q1-Header.h"
using namespace std;
int main()
{
	Rectangle obj(0, 0), obj1(0, 0);
	int N = 2;
	int area[2];

	obj.Values();
	obj1.Values();

	area[0] = obj.area();
	area[1] = obj1.area();

	Sort(area, N);

	if (compareRect1(obj, obj1) == true)
	{
		cout << "Rectangle 1 is bigger" << endl;
	}
	else
		cout << "Rectangle 2 is bigger" << endl;

	if (area[0] == area[1])
		cout << "Both the rectangles are same " << endl;

	Line(area);

}
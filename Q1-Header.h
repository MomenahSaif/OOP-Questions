#pragma once
#include<iostream>
using namespace std;
struct Rectangle {
	int x = 0;
	int y = 0;
	int w = 0;// width
	int h = 0; // height


	Rectangle(int width, int height) {

		w = width;
		h = height;
	};


	int area();



	void Values()
	{
		cout << "Enter width and height:" << endl;
		cin >> w >> h;
	}
};
int Rectangle::area()
{
	int area;
	area = w * h;

	cout << "The area is: " << area << endl;
	return area;


}
bool compareRect1(Rectangle r1, Rectangle r2)
{
	if ((r1.w * r1.h) == (r2.w * r2.h))
		return true;
	else
		return false;

}

int Sort(int area[], int N)
{
	for (int step = 0; step < N; ++step)
		for (int i = 0; i < N - step; ++i)
		{
			if (area[i] > area[i + 1])
			{
				int temp = area[i];
				area[i] = area[i + 1];
				area[i + 1] = temp;
			}
		}

	return area[2];
}

void Line(int area[])
{
	srand(time(0));
	int p1, p2;
	p1 = rand();
	p2 = rand();

	if ((area[0] > p1 && area[0] < p2) || (area[0] > p1 && area[0] < p2))
		cout << "Rectangle 1 lies on the line" << endl;
	else if (area[1] > p1 && area[1] < p2)
		cout << "Rectangle 2 lies on the line " << endl;
	else
		cout << "None of the rectangles lie on line" << endl;





}


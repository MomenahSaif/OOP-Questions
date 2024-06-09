#include<iostream>
#include"Q2-Header.h"
using namespace std;
int main()
{
	Car c1(5);

	c1.setPetrolLevel();
	c1.getPetrolLevel();

	int distance;
	cout << "Enter the distance : " << endl;
	cin >> distance;

	if (c1.MoveCar(distance) == false)
	{
		c1.refill();
	}

	if (c1.isEmpty() == true)
	{
		cout << "Your car's petrol tank is empty" << endl;
	}




}
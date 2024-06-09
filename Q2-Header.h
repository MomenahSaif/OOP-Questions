#pragma once
#include<iostream>
using namespace std;
struct Car {
	int petrolLevel;

	Car() {}
	Car(int petrolLevel = 0) {}

	int getPetrolLevel()
	{
		return petrolLevel;

	}

	void setPetrolLevel()
	{
		cout << "Enter the petrol level:" << endl;
		cin >> petrolLevel;

		if (petrolLevel < 0 || petrolLevel>45)
		{
			cout << "Invaild input" << endl;
			setPetrolLevel();
		}


	}

	bool MoveCar(int distanceKM)
	{
		if (distanceKM <= petrolLevel)
			return true;
		else if (distanceKM > petrolLevel)
			return false;
	}

	void refill()
	{
		cout << "Refill your tank as it doesn't have enough petrol for the required distance" << endl;
	}

	bool isEmpty()
	{
		if (petrolLevel == 0)
			return true;
		else
			return false;
	}
};

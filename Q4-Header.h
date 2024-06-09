#pragma once
#pragma warning(disable:4996)
#include<iostream>
using namespace std;

struct Address {

	char* address;
	char* city;
	char* state;
	int zip_code;
	
};

struct CustomerAccount {

	char* name;
	Address address;
	long long phoneNum;
	float balance;
	char* accountNum;
	
			
};



void OpenCustomerAccount(CustomerAccount* customers[], int& accountsOpen, char* NameVal, char* addVal, char* cityVal, char* stateVal, int
	zipcodeVal, long long phoneVal, float balanceVal,int j)
{
	int l_name = strlen(NameVal);
	customers[j]->name = new char[l_name + 1];
	strcpy(customers[j]->name, NameVal);

	int l_address = strlen(addVal);
	customers[j]->address.address = new char[l_address + 1];
	strcpy(customers[j]->address.address, addVal);

	int l_city = strlen(cityVal);
	customers[j]->address.city = new char[l_city + 1];
	strcpy(customers[j]->address.city, cityVal);

	int l_state = strlen(stateVal);
	customers[j]->address.state = new char[l_state + 1];
	strcpy(customers[j]->address.state, stateVal);

	customers[j]->address.zip_code = zipcodeVal;

	customers[j]->phoneNum = phoneVal;

	customers[j]->balance = balanceVal;
	customers[j]->accountNum = new char[6];
	sprintf(customers[j]->accountNum,"PK%d", j+1);

}
int SearchCustomer(CustomerAccount* customers[], int accountsOpen, char* accountNum)
{
	for (int i = 0; i < accountsOpen; i++)
		{
			if (!strcmp(customers[i]->accountNum, accountNum))
			{
				return i;
			}
		}

		return -1;
	
}
bool UpdateCustomerAccount(CustomerAccount* customers[], int accountsOpen, char* accountNumVal
		, Address addressVal)
{
		for (int i = 0; i < accountsOpen; i++)
		{
			if (customers[i]->accountNum == accountNumVal)
				customers[i]->address = addressVal;
			return true;
		}

		return false;
}

bool UpdateCustomerAccount(CustomerAccount * customers[], int accountsOpen, char* accountNumVal
		, long long phoneVal)
{

		for (int i = 0; i < accountsOpen; i++)
		{
			if (!strcmp(customers[i]->accountNum, accountNumVal)) {
				customers[i]->phoneNum = phoneVal;
				return true;
			}
		}

		return false;

}

bool UpdateCustomerAccount(CustomerAccount * customers[], int accountsOpen, char* accountNumVal,
		float balanceVal)
{
		for (int i = 0; i < accountsOpen; i++)
		{
			if (customers[i]->accountNum == accountNumVal)
				customers[i]->balance = balanceVal;
			return true;
		}

		return false;
}

void DisplayAllCustomers(CustomerAccount * customers[], int accountsOpen)
{

		for (int i = 0; i < accountsOpen; i++)
		{
			cout << "The accounts data is:" << endl;
			cout << "Name: " << customers[i]->name;
			cout << "The address is:\t" << "address:" << customers[i]->address.address<<endl << "\tCity: " << customers[i]->address.city
				<<endl<< "\tState: " << customers[i]->address.state<<endl << "\tZip Code: " << customers[i]->address.zip_code<<endl;
			cout << "Phone Number: " << customers[i]->phoneNum << endl;;
			cout << "Balance: " << customers[i]->balance << endl;
			cout << "Account Number: " << customers[i]->accountNum << endl;
		}
}

	

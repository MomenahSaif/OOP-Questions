#include<iostream>
#include"Q4-Header.h"
using namespace std;
CustomerAccount* customers[100];
int accountsOpen;
int main()
{
	Address address1;
	char choice;
	char account[10];
	int search_account ;
	int account_choice;

	
	char address[50]="H703";
	char city[20]="Lahore";
	char state[20] = "Punjab";
	int zip_code=440000;
	char name[20]="Momi";
	long long phoneNum=123456;
	float balance=500;
	char accountNum[10] = "PK2";
	
	do {
		cout << "Enter the number of accounts" << endl;
		cin >> accountsOpen;
	} while (accountsOpen < 0 && accountsOpen > 101);
	
	
	for (int i = 0; i < 100; i++)
	{
		customers[i] = new CustomerAccount;
	}

	cout << "Enter the datas of all accounts:" << endl;
	for (int i = 0; i < accountsOpen; i++)
	 {
		cout << " Enter the accounts data:" << endl;
		cout << "Name: \t";
		cin >> name;
		 cout << endl;
		cout << "The address is:\t" << "address:";
		cin >> address;
		cout << "\tCity: ";
		cin >>city;
		cout << "\tState: ";
		cin >> state;
		cout << "\tZip Code: ";
		cin >> zip_code;
		cout << endl;
		cout << "Phone Number:\t ";
		cin >> phoneNum;
		cout << endl;
		cout << "Balance: \t";
		cin >> balance;
		cout<< endl;
		cout << "Account Number:\t";
		cin >>accountNum;
		cout<< endl;
		
		OpenCustomerAccount(customers, accountsOpen, name, address, city, state, zip_code, phoneNum, balance, i);
	 }

	
	
	cout << "Do you want to update your accounts address(enter Y or N)" << endl;
	cin >> choice;
	if (choice == 'Y')
	{
		cout << "Enter the number of your account:\t";
		cin >> accountNum;
		cout << endl;

		search_account = SearchCustomer(customers, accountsOpen, accountNum);
		if (search_account == -1)
			cout << "The account number is invalid...." << endl;
		else
		{
			address1 = customers[search_account]->address;

			cout << "Now enter the new address:" << endl;
			cout << "\tAdress:";
			cin >> address1.address;
			cout << endl << "\tCity:";
			cin >> address1.city;
			cout << endl << "\tState:";
			cin >> address1.state;
			cout << endl << "\Zip Code:";
			cin >> address1.zip_code;
			customers[search_account]->address = address1;


			UpdateCustomerAccount(customers, accountsOpen, account, address1);
		}
	}

	
	choice = 'N';
	long long phone;
	cout << "Do you want to update your accounts phone Number(enter Y or N)" << endl;
	cin >> choice;
	if (choice == 'Y')
	{
		cout << "Enter the number of your account:\t";
		cin >> accountNum;
		cout << endl;

		search_account = SearchCustomer(customers, accountsOpen, accountNum);
		if (search_account == -1)
			cout << "The account number is invalid...." << endl;
		else
		{
			phone = customers[search_account]->phoneNum;

			cout << "Now enter the new phone number:" << endl;
			cin >> phone;

			UpdateCustomerAccount(customers, accountsOpen, accountNum, phone);
		}
	}
	
	
	
	DisplayAllCustomers(customers, accountsOpen);
	

	
}

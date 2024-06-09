#include<iostream>
#include<string.h>
#include"Q3-Header.h"
using namespace std;
int main()
{
	String str1(6);
	
     int l;
	 char ch;
	
	l = str1.length();
	char* input;
	input = new char[l];
	
	cout << "Enter the string" << endl;
	for (int i = 0; i < l; i++)
	{
		cin >> input[i];
		str1.setAt(i, input[i]);
	}
	cout << endl;
	
	cout << "Enter a charcter to append in the string: " << endl;
	cin >> ch;
	str1.append(ch);
	str1.display();


	String str2(str1);

	int l2 = str2.length();
	char * append1;
	append1 = new char[l+l2];
	

	cout << "Enter another string to append" << endl;
	for (int i = 0; i < l2; i++)
	{
		cin >> append1[i];
		str2.setAt(i, append1[i]);

	}

	str2.append(str1,l2+l);
	str2.display();

	//str2.append(input);

	if (str1.isEmpty() == true)
		cout << "The string is empty" << endl;

	str1.copy(input);

	char search;
	cout << "Enter the character you want to search:" << endl;
	cin >> search;
	cout << "The index of the character is: " << str1.find(search) << endl;

	cout << "The string in integar is:" << str1.stoi() << endl;

	str1.display();
}
#pragma once
#pragma warning(disable : 4996)
#include<cstring>
#include<sstream>
#include<iostream>
using namespace std;
class String {
private:
	char* string;
	char* cstring;
	int length2;
public:
	String(){
	
		this->string = string;
		length2 = 0;
		string = NULL;
	}
	String(char* str) {
		
		while (str[length2] = '\0')
			++length2;

		string = new char[length2];
		for (int i = 0; i < length2; i++)
			string[i] = str[i];


	}

	String(const String& amp)
	{
		
		length2 = amp.length2;
		string = new char[length2];
		for (int i = 0; i < length2; i++)
		{
			string[i] = amp.string[i];
		}

	}

	String(int x)
	{
		length2 = x;
		string=new char[length2];
	}

	char getAt(int i)
	{
		return string[i];
	}

	void setAt(int i, char c)
	{
		string[i] = c;
	}

	String substr(int pos, int len)
	{
		String* substring;
		substring = new String[len];

		return substring[pos];
	}

	String substr(int pos)
	{
		return string[pos];
	}

	void append(char a)
	{
		length2 = ++length2;
		
		string[length2-1] = a;

	}

	void append(String str,int length1)
	{
		/*int length1;
		string[length1+length2]=string[length2] + str.string[length1];*/
		strcat(str.string, string);

		cout << str.string << endl;
		
	}

	void append(char* str)
	{
		*str = '\0';
	}

	int length()
	{
		
		cout << "Enter length" << endl;
		cin >> length2;

		return length2;
    }

	char* tocstring()
	{
		*string = '\0';

		return string;
	}

	void display()
	{
		cout << "The string is:\t";
		for (int i = 0; i < length2; i++)
		{
			cout << string[i];
		}

		cout << endl;
	}

	bool isEmpty()
	{
		if (string = NULL)
			return true;
		else
			return false;
	}

	void copy(const String& amp)
	{
		string = amp.string;
	}

	void copy(const char*)
	{
		cstring = string;
	}

	int find(char find)
	{
		for (int i = 0; i < length2; i++)
		{
			if (string[i] == find)
				return i;
		}

	}

	bool equal(String str)
	{
		int total=0;
		for (int i = 0; i < length2; i++)
			if (string[i] = str.string[i])
				total++;
		if (total == length2)
			return true;
		else
			return false;

	}

	int stoi()
	{
		int n;
		stringstream num(string);
		num >> n;
		return n;
	}

	~String()
	{
		delete string;
		string = 0;

		delete cstring;
		cstring = 0;
	}
};

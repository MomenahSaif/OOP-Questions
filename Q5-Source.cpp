#include<iostream>
#include"Q5-Header.h"
using namespace std;
int main()
{
	int rowsTotal = 0, colsTotal = 0,rowNo=0,colNo=0,value1=0,value2=0;
	
	
	
	cout << "Enter rows:"<<endl;
	cin >> rowsTotal;
	cout << "Enter columns:"<<endl;
	cin >> colsTotal;;
	if ((rowsTotal== 2) && (colsTotal == 2))
	{
		Matrix m2(0, 0, 0, 0, 2, 2);

		m2.getRow();
		m2.getCol();
		for (int i = 0; i < rowsTotal; i++)
		{
			for (int j = 0; j < colsTotal; j++)
			{
				cout << "Enter a value:" << endl;
				cin >> value1;
				m2.setValue(i, j, value1);

			}

		}

		cout << "The total of matrix is: " << m2.Total() << endl;
		cout << "The average of matrix is: " << m2.Average() << endl;

		cout << "Enter row number for which you want total of:";
		cin >> rowNo;
		cout << "The row total the given row of matrix is: " << m2.RowTotal(rowNo) << endl;
		cout << "Enter column number for which you want total of:";
		cin >> colNo;
		cout << "The column total the given column of matrix is: " << m2.ColumnTotal(colNo) << endl;
		cout << "Enter row number for which you want highest of:";
		cin >> rowNo;
		cout << "The row highest the given row of matrix is: " << m2.HighestInRow(rowNo) << endl;
		cout << "Enter row number for which you want lowest of:";
		cin >> rowNo;
		cout << "The row lowest the given row of matrix is: " << m2.LowestInRow(rowNo) << endl;
		cout << "The transpose of the matrix is:" << endl;
		m2.display();
		Matrix trans = m2.Transpose();
		cout << "Transpose = \n";
		trans.display();
		cout << "The sum of left diagonal is: " << m2.LeftDiagonalTotal() << endl;
		cout << "The sum of right diagonal is: " << m2.RightDiagonalTotal() << endl;


		Matrix copy(m2);

		cout << "Enter another matrix:" << endl;
		for (int i = 0; i < rowsTotal; i++)
		{
			for (int j = 0; j < colsTotal; j++)
			{
				cout << "Enter a value:" << endl;
				cin >> value2;
				copy.setValue(i, j, value2);

			}

		}
		cout << "The matrix is:" << endl;
		copy.display();

		Matrix add = copy.Add(m2);
		cout << "The addition of both matrix is:" << endl;
		add.display();

		Matrix subtract = copy.Subtract(m2);
		cout << "The subtraction of both matrix is:" << endl;
		subtract.display();

		Matrix multiply = copy.Multiply(m2);
		cout << "The multiplication of both matrix is:" << endl;
		multiply.display();

		int kSmallest;
		cout << "Enter which smallest you want of the matrix:" << endl;
		cin >> kSmallest;
		cout << "The smallest of the given number is: " << m2.FindkSmallest(kSmallest) << endl;

		int kLargest;
		cout << "Enter which largest you want of the matrix:" << endl;
		cin >> kLargest;
		cout << "The largest of the given number is: " << m2.FindkLargest(kLargest) << endl;

		Matrix Merge = m2.merge(copy);
		Merge.display();
	}

	else if ((rowsTotal == 3) && (colsTotal == 3))
	{
		Matrix m3(0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3);
		m3.getRow();
		m3.getCol();
		for (int i = 0; i < rowsTotal; i++)
		{
			for (int j = 0; j < colsTotal; j++)
			{
				cout << "Enter a value:" << endl;
				cin >> value1;
				m3.setValue(i, j, value1);

			}

		}

		cout << "The total of matrix is: " << m3.Total() << endl;
		cout << "The average of matrix is: " << m3.Average() << endl;

		cout << "Enter row number for which you want total of:";
		cin >> rowNo;
		cout << "The row total the given row of matrix is: " << m3.RowTotal(rowNo) << endl;
		cout << "Enter column number for which you want total of:";
		cin >> colNo;
		cout << "The column total the given column of matrix is: " << m3.ColumnTotal(colNo) << endl;
		cout << "Enter row number for which you want highest of:";
		cin >> rowNo;
		cout << "The row highest the given row of matrix is: " << m3.HighestInRow(rowNo) << endl;
		cout << "Enter row number for which you want lowest of:";
		cin >> rowNo;
		cout << "The row lowest the given row of matrix is: " << m3.LowestInRow(rowNo) << endl;
		cout << "The transpose of the matrix is:" << endl;
		m3.display();
		Matrix trans = m3.Transpose();
		cout << "Transpose = \n";
		trans.display();
		cout << "The sum of left diagonal is: " << m3.LeftDiagonalTotal() << endl;
		cout << "The sum of right diagonal is: " << m3.RightDiagonalTotal() << endl;


		Matrix copy(m3);

		cout << "Enter another matrix:" << endl;
		for (int i = 0; i < rowsTotal; i++)
		{
			for (int j = 0; j < colsTotal; j++)
			{
				cout << "Enter a value:" << endl;
				cin >> value2;
				copy.setValue(i, j, value2);

			}

		}
		cout << "The matrix is:" << endl;
		copy.display();

		Matrix add = copy.Add(m3);
		cout << "The addition of both matrix is:" << endl;
		add.display();

		Matrix subtract = copy.Subtract(m3);
		cout << "The subtraction of both matrix is:" << endl;
		subtract.display();

		Matrix multiply = copy.Multiply(m3);
		cout << "The multiplication of both matrix is:" << endl;
		multiply.display();

		int kSmallest;
		cout << "Enter which smallest you want of the matrix:" << endl;
		cin >> kSmallest;
		cout << "The smallest of the given number is: " << m3.FindkSmallest(kSmallest) << endl;

		int kLargest;
		cout << "Enter which largest you want of the matrix:" << endl;
		cin >> kLargest;
		cout << "The largest of the given number is: " << m3.FindkLargest(kLargest) << endl;

		Matrix Merge = m3.merge(copy);
		Merge.display();
	}

	else if ((rowsTotal == 4) && (colsTotal == 4))
	{
	Matrix m4(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 4);
	m4.getRow();
	m4.getCol();
	for (int i = 0; i < rowsTotal; i++)
	{
		for (int j = 0; j < colsTotal; j++)
		{
			cout << "Enter a value:" << endl;
			cin >> value1;
			m4.setValue(i, j, value1);

		}

	}

	cout << "The total of matrix is: " << m4.Total() << endl;
	cout << "The average of matrix is: " << m4.Average() << endl;

	cout << "Enter row number for which you want total of:";
	cin >> rowNo;
	cout << "The row total the given row of matrix is: " << m4.RowTotal(rowNo) << endl;
	cout << "Enter column number for which you want total of:";
	cin >> colNo;
	cout << "The column total the given column of matrix is: " << m4.ColumnTotal(colNo) << endl;
	cout << "Enter row number for which you want highest of:";
	cin >> rowNo;
	cout << "The row highest the given row of matrix is: " << m4.HighestInRow(rowNo) << endl;
	cout << "Enter row number for which you want lowest of:";
	cin >> rowNo;
	cout << "The row lowest the given row of matrix is: " << m4.LowestInRow(rowNo) << endl;
	cout << "The transpose of the matrix is:" << endl;
	m4.display();
	Matrix trans = m4.Transpose();
	cout << "Transpose = \n";
	trans.display();
	cout << "The sum of left diagonal is: " << m4.LeftDiagonalTotal() << endl;
	cout << "The sum of right diagonal is: " << m4.RightDiagonalTotal() << endl;


	Matrix copy(m4);

	cout << "Enter another matrix:" << endl;
	for (int i = 0; i < rowsTotal; i++)
	{
		for (int j = 0; j < colsTotal; j++)
		{
			cout << "Enter a value:" << endl;
			cin >> value2;
			copy.setValue(i, j, value2);

		}

	}
	cout << "The matrix is:" << endl;
	copy.display();

	Matrix add = copy.Add(m4);
	cout << "The addition of both matrix is:" << endl;
	add.display();

	Matrix subtract = copy.Subtract(m4);
	cout << "The subtraction of both matrix is:" << endl;
	subtract.display();

	Matrix multiply = copy.Multiply(m4);
	cout << "The multiplication of both matrix is:" << endl;
	multiply.display();

	int kSmallest;
	cout << "Enter which smallest you want of the matrix:" << endl;
	cin >> kSmallest;
	cout << "The smallest of the given number is: " << m4.FindkSmallest(kSmallest) << endl;

	int kLargest;
	cout << "Enter which largest you want of the matrix:" << endl;
	cin >> kLargest;
	cout << "The largest of the given number is: " << m4.FindkLargest(kLargest) << endl;

	Matrix Merge = m4.merge(copy);
	Merge.display();
	}

	else
	cout << "Invalid size of matrix" << endl;
}

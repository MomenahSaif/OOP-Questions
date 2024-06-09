#pragma once
#include<iostream>
#include <algorithm>
using namespace std;

class Matrix {

private:
	int** matrix;
	int row, col;
	
public:
	Matrix(int r = 2, int c = 2) {
		row = r;
		col = c;
		matrix = new int* [row];
		for (int i = 0; i < row; i++)
		{
			matrix[i] = new int[col];
		}
	}

	Matrix(int n1, int n2, int n3, int n4 , int r = 2, int c = 2) {
		row = r;
		col = c;
		 matrix = new int* [row];
        for (int i = 0; i < row; i++)
		{
            matrix[i] = new int[col];
		}
		matrix[0][0] = n1;
		matrix[0][1] = n2;
		matrix[1][0] = n3;
		matrix[1][1] = n4;
		
	}

	Matrix(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int
		r = 3, int c = 3) {
		row = r; 
		col=c;
		 matrix = new int* [row];
		for (int i = 0; i < row; i++)
		{
			matrix[i] = new int[col];
		}
		matrix[0][0] = n1;
		matrix[0][1] = n2;
		matrix[0][2] = n3;
		matrix[1][0] = n4;
		matrix[1][1] = n5;
		matrix[1][2] = n6;
		matrix[2][0] = n7;
		matrix[2][1] = n8;
		matrix[2][2] = n9;
		
	}

	Matrix(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int
		n10, int n11, int n12, int n13, int n14, int n15, int n16, int r = 4, int c =
		4) {
		row = r;
		col = c;
		 matrix = new int* [row];
		for (int i = 0; i < row; i++)
		{
			matrix[i] = new int[col];
		}
		matrix[0][0] = n1;
		matrix[0][1] = n2;
		matrix[0][2] = n3;
		matrix[0][3] = n4;
		matrix[1][0] = n5;
		matrix[1][1] = n6;
		matrix[1][2] = n7;
		matrix[1][3] = n8;
		matrix[2][0] = n9;
		matrix[2][1] = n10;
		matrix[2][2] = n11;
		matrix[2][3] = n12;
		matrix[3][0] = n13;
		matrix[3][1] = n14;
		matrix[3][2] = n15;
		matrix[3][3] = n16;
		
	}	

	Matrix(const Matrix& m){
		
		row = m.row;
		col = m.col;
		matrix = new int* [row];
		for (int i = 0; i < row; i++)
		{
			matrix[i] = new int[col];
		}

		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
		      matrix[i][j] = m.matrix[i][j];

	}

	~Matrix() {
		for (int i = 0; i < row; i++) 
		{
			delete matrix[i];
			
		}
		delete[] matrix; 
		matrix = 0;
	}


	int getRow()
	{
		return row;
	}

	int getCol()
	{
		
		return col;
	}

	int getValue(int row, int col)
	{
		return matrix[row][col];
	}

	void setValue(int row, int col, int value)
	{
		matrix[row][col] = value;
	}

	int Total()
	{
		int sum = 0;
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
				sum = sum + matrix[i][j];
		
		return sum;
	}

	double Average()
	{
		return Total() / (row * col);
	}

	int RowTotal(int row1)
	{
		int rowtotal = 0;
		
		for (int i = 0; i < col; i++)
		{
			rowtotal = rowtotal + matrix[row1][i];
		}

		return rowtotal;
	}

	 int ColumnTotal(int col1)
	 {
		 int coltotal = 0;
		 for (int i = 0; i < row; i++)
		 {
			 coltotal = coltotal + matrix[i][col1];
		 }

		 return coltotal;
	 }

	 int HighestInRow(int row)
	 {
		 int max = 0;
		 for (int i = 0; i < col; i++)
		 {
			 if (matrix[row][i] > max)
				 max = matrix[row][i];
		 }

		 return max;
	 }

	 int LowestInRow(int row)
	 {
		 int min=matrix[row][0];
		 for (int i = 0; i < col; i++)
		 {
			 if (matrix[row][i] < min)
				 min = matrix[row][i];
		 }

		 return min;
	 }


	 Matrix Transpose()
	 {
	
		 Matrix temp(*this);
			 for (int i = 0; i < row; i++)
		 {
			 for (int j = 0; j < col; j++)
			 {
				 temp.matrix[j][i] = matrix[i][j];
			 }

		 }

		 return temp; 
     }

	 int LeftDiagonalTotal() 
	 {
		 int total = 0;
		 for (int i = 0; i < row; i++)
		    for (int j = 0; j < col; j++)
			 {
				if (i == j)
					total = total + matrix[i][j];
			 }

		 return total;
	 }

	 int RightDiagonalTotal()
	 {
		 int total = 0;
		 for (int i = 0; i < row; i++)
			 for (int j = 0; j < col; j++)
			 {
				 if ((i+j)==row-1)
					 total = total + matrix[i][j];
			 }

		 return total;
	 }

	 Matrix Add(Matrix m)
	 {
		 for (int i = 0; i < row; i++)
			 for (int j = 0; j < col; j++)
				 m.matrix[i][j] = matrix[i][j] + m.matrix[i][j];

		 return m;

	 }

	 Matrix Subtract(Matrix m)
	 {
		 for (int i = 0; i < row; i++)
			 for (int j = 0; j < col; j++)
				 m.matrix[i][j] = matrix[i][j] - m.matrix[i][j];

		 return m;
	 }

	 Matrix Multiply(Matrix m)
	 {
		 Matrix temp(*this);
		 for (int i = 0; i < row; ++i)
			 for (int j = 0; j < col; ++j)
				 for (int k = 0; k < col; ++k)
				 {
					 temp.matrix[i][j] += matrix[i][k] * m.matrix[k][j];
				 }

		 return temp;

	 }

	 int FindkSmallest(int k)
	 {
		 int* smallest;
		 smallest = new int[row * col];
		 int num = 0;

		 for (int i = 0; i < row; i++) {

			 for (int j = 0; j < col; j++) {

				 smallest[num++] = matrix[i][j];

			 }

		 }
		 
		 sort(smallest, smallest + num);

		 return smallest[k - 1];

		 
	 }

	 int FindkLargest(int k)
	 {
		 int* largest;
		 largest = new int[row * col];
		 int n = row * col,temp=0,num=0;

		 for (int i = 0; i < row; i++) {

			 for (int j = 0; j < col; j++) {

				 largest[num++] = matrix[i][j];

			 }

		 }
		 for (int i = 1; i < (row*col); ++i)
		 {
			 for (int j = 0; j < ((row*col) - i); ++j)
				 if (largest[j] < largest[j + 1])
				 {
					 temp = largest[j];
					 largest[j] = largest[j + 1];
					 largest[j + 1] = temp;
				 }
		 }
		 
		 return largest[k-1];

	 }
	 Matrix merge(Matrix m) {

		int col_merge = 2 * col;
		Matrix temp(row, col_merge);

		 for (int i = 0; i < row; i++)
		 {
			 for (int j = 0; j < col; j++)
			 {
				 temp.matrix[i][j]=matrix[i][j];
				 temp.matrix[i][j + row] = m.matrix[i][j];
			 }
		 }
		 return temp;
	 }
	 void display()
	 { for (int i = 0; i < row; i++)
		 {
			 for (int j = 0; j < col; j++)
				 cout << matrix[i][j] << "\t";
			 cout << endl;

         }
	 }

	
};
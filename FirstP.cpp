// FirstP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Helpers.h"
#include <Windows.h>
#include <cmath>


/*class NewCPPI
{
private:
	double x,y,z;
public:	
	NewCPPI(double cx, double cy, double cz)
	{
		x = cx;
		y = cy;
		z = cz;
	}

	float coutfl()
	{
		return sqrt((x * x) + (y * y) + (z * z));
	}

		



};





using namespace std;

void cycle(int N)
{
	for (int i = 0; i < N; i++)
	{
		switch (i % 2)
			case 0: {cout << i << endl; }

	}
}*/

class Stack 
{
private:
	int length = 0;
public:
	int* stack = new int[length];
	void Push(int p) 
	{
		stack[length] = p;
		length++;
	}
	void Pop() 
	{
		length--;
		stack = new int[length];
	}

};

int main()
{
	Stack xl;
	xl.Push(3);
	xl.Push(14);
	std::cout << xl.stack[0] << std::endl << xl.stack[1] << std::endl;
	xl.Pop();
	std::cout << std::endl << xl.stack[1];
}


/*	
void previous() 
	{
		int x, y;
		cout << "First number: ";  cin >> x;
		cout << "Second number: "; cin >> y;
		cout << "Sum quad equal: " << degree(x, y);


		int s = 80, n = 0;
		while (s + n < 150) {
			s = s - 5;
			n = n + 15;
		}
		cout << n;
		return 0;


		string fts("Hello from installation 04");
		string zero("Hello from installation 00");
		cout << fts << endl << zero << endl << "String length " << fts.length() << " characters" << endl;
		cout << "First character " << fts[0] << ", last character " << fts[fts.length() - 1]; 




		while (true) {}
	const int w = 56;
	for(int i = 0; i < w; i++)
	{
		if (i % 2 == 1)
		{
			cout << i << endl;
		}
	}
	cout << endl;
	cycle(129);


	SYSTEMTIME st;
	GetLocalTime(&st);
	int day = st.wDay;
	int sum = 0;

	const int N = 3;
	int array[N][N] = {};
	for(int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			array[i][j] = i + j;
			cout << array[i][j] << endl;

			if (day % N == i) { sum += array[i][j]; };
		}
		cout << endl;
	}
	cout << "Sum of indexes: " << sum << endl;



	} */



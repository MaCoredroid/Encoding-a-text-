// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
int main()
{
	std::string a;
	std::getline(std::cin, a);
	char b[100];
	int num = 0;
	std::vector < std::vector<char>> c;
	for (int i = 0; i < a.length(); i++)
	{
		if ( (a[i] >= 97 && a[i] <= 122)||(a[i]>=49&&a[i]<=57))
		{
			b[num] = a[i];
			num++;
		}
		if (a[i] >= 65 && a[i] <= 90)
		{
			b[num] = a[i]+32;
			num++;
		}
	}
	if (num == 0)
	{
		std::cout << "Null";
	}
	int d = int(sqrt(num));
	if (num == d*d)
	{
		c.resize(d);
		int e = 0;
		for (int i = 0; i < d; i++)
		{
			c[i].resize(d);
			for (int j = 0; j < d; j++)
			{
				if (e<num)
				{
					c[i][j] = b[e];
					e++;
				}

			}
		}
		for (int i = 0; i < d; i++)
		{
			for (int j = 0; j < d; j++)
			{
				if (c[j][i])
				{
					std::cout << c[j][i];
				}
			}
			if (i != d - 1)
			{
				std::cout << " ";
			}

		}

	}
	else 
	{
		if (num <= d * (d + 1))
		{
			int e = 0;
			c.resize(d);
			for (int i = 0; i < d; i++)
			{
				c[i].resize(d+1);
				for (int j = 0; j < d+1; j++)
				{
					if (e < num)
					{
						c[i][j] = b[e];
						e++;
					}
				}
			}
			for (int i = 0; i < d+1; i++)
			{
				for (int j = 0; j < d; j++)
				{
					if (c[j][i])
					{
						std::cout << c[j][i];
					}
				}
				if (i != d)
				{
					std::cout << " ";
				}

			}

		}
		else
		{
			int e = 0;
			c.resize(d+1);
			for (int i = 0; i < d+1; i++)
			{
				c[i].resize(d + 1);
				for (int j = 0; j < d + 1; j++)
				{
					if (e < num)
					{
						c[i][j] = b[e];
						e++;
					}
				}
			}
			for (int i = 0; i < d+1; i++)
			{
				for (int j = 0; j < d+1; j++)
				{
					if (c[j][i])
					{
						std::cout << c[j][i];
					}
				}
				if (i != d)
				{
					std::cout <<" ";
				}
			}

		}
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

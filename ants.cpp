// ConsoleApplication3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int Max_n = 1000000;
int x[Max_n];
int min(int a, int b)
{
	if (a >= b)
		return b;
	else
		return a;
}
int max(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;
}
int main()
{   
	//int testcase;
	//std::cin >> testcase;
	//while (testcase--)
	    int testcase;
		cin >> testcase;
		while (testcase--)
		{
			int L;
			int n;
			std::cin >> L >> n;
			for (int i = 0; i < n; i++)
			{
				std::cin >> x[i];
			}
			int MinT = 0;
			for (int i = 0; i < n; i++)
			{
				MinT = max(MinT, min(x[i], (L - x[i])));
			}
			int MaxT = 0;
			for (int i = 0; i < n; i++)
			{
				MaxT = max(MaxT, max(x[i], (L - x[i])));
			}
			std::cout << MinT << " " << MaxT << std::endl;
		}
	
	
	return 0;
}

// NewStandardTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::endl;

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> nums = { 1, 3, 5, 7, 9 };
	for (auto i : nums)
	{
		cout << i << endl;
	}
	system("PAUSE");
	return 0;
}


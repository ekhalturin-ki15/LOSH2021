#include <iostream>
#include <fstream>
#include <vector>
// #include "bits/stdc++.h


using namespace std;

int main()
{
	//freopen_s("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);


	ifstream in("input.txt");
	ofstream out("output.txt");

	//int char bool long long unsigned float double long double 


	// -100 100
	int n, a;
	in >> n;

	const int min_val = -100;
	const int max_val = 100;
	vector<int> v(max_val - (min_val)+1);


	for (int i = 0; i < n; ++i)
	{
		in >> a;
		++v[a - min_val];
	}

	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 0; j < v[i]; ++j)
		{
			out << i + min_val << " ";
		}

	}











}
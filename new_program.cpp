#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <deque>
// #include "bits/stdc++.h


using namespace std;


//int main(int argn, vector<vector<char>> argv)

//type name(type_first_param name_first_param, , , )

int FIVE(int a, int b)
{
	return 4;
}

int FIVE(double a)
{
	return 3;
}


int FIVE(int a)
{
	return 2;
}


int FIVE()
{
	return 1;
}

int main(int argn, char** argv)
{
	int a; int b;


	ifstream in("input.txt");
	ofstream out("output.txt");


	vector<int> v;
	v.resize(7);

	out << FIVE(1);


}
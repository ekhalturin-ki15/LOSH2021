#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <deque>
#include <cstdio>
#include <functional>
#include <list>

#pragma comment(linker, "/STACK:26777216")
// #include "bits/stdc++.h

using namespace std;


struct A
{
	int a = 1;
	int b = 2;
	int c = 3;



	int size()
	{
		return a + b + c;
	}

};

struct B
{
	int a = 1;
	int b = 2;
	int c = 3;



	string size()
	{
		return "string";
	}

};



auto func(auto a)
{
	return a.size();
}



int main(int argn, char** argv)
{

#ifdef TEST
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif



	
}



#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
// #include "bits/stdc++.h





using namespace std;

int main()
{
	//freopen_s("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);


	ifstream in("input.txt");
	ofstream out("output.txt");


	std::vector<int> a = { 0, 4, 6, 50 };
	std::vector<int> b = { -23, 4, 4, 5, 6, 50, 60 };


	vector<int> c;


	merge(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(c)); // back_inserter


	//int char bool long long unsigned float double long double 

	// 1 3 7 8 9 7 3 3 7 8 9 2 7 
	// 8 







}
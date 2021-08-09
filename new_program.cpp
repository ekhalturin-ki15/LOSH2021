#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <deque>
#include <cstdio>
#include <functional>
#include <list>
#include <stack>
#include <queue>

#pragma comment(linker, "/STACK:26777216")
// #include "bits/stdc++.h

using namespace std;




int main(int argn, char** argv)
{

#ifdef TEST
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//std::stack<int> st;

	//std::queue< int > qt;

	//std::vector< int > v; //[i] iterator begin end

	//std::string s; //[i] iterator begin end + 

	//std::deque< int > dq; //[i] iterator begin end push_back push_front


	//for (int i = 0; i < 100; ++i)
	//{
	//	if (i % 2 == 0)
	//	{
	//		dq.push_front(i);
	//	}
	//	else
	//	{
	//		dq.push_back(i);

	//		dq.front();
	//		dq.back();
	//	}

	//}


	////for (auto it : dq) cout << it <<" ";

	//for (int i = 0; i < dq.size(); ++i)
	//{
	//	int& it = dq[i];
	//	cout << it << " ";
	//}

	long long a, b;

	cin >> a >> b;

	cout << a + b;

	/*
	O(1) n - любое (n = 10^18)

	O(log n) n - любое (n = 10^18)
	
	O( sqrt n)  n - любое (n = 10^12)

	O( n ) n - любое (n = 10^6)

	O( n * log n) n - любое (n = 10^5) std::sort
	
	O( n^2 )	(n = 10^3)

	O( n^3 ) (n = 10^2)

	O ( 2 ^ n ) (n = 20)

	O ( !n ) (n = 9)

	----------------
	O ( n ^ n ) (n = 7)


	*/
	



}



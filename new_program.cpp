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

	//list<long long> l;


	// - 44 - [4]
	const int delete_index = 4;

	//vector<int> v = { 1,2,3,4,5,6,7,8};

	vector<int> v = { 10,21,254,36,44,53,68,72,81,39 };

	for (int i = delete_index; i < v.size() - 1; ++i)
	{
		v[i] = v[i + 1];
	} // erase O(n) pop_back O(1)

	//erase all position O(1)
	v.pop_back();

	//swap pop_back


	//vector<int> pref, post;

	//for (int i = 0; i < delete_index; ++i) pref.push_back(v[i]);

	//for (int i = delete_index+1; i < v.size(); ++i) post.push_back(v[i]);

	//

	//vector<int> q;
	//merge(pref.begin(), pref.end(), post.begin(), post.end(), std::back_inserter(q));



	


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



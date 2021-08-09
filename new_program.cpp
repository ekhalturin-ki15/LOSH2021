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

#include <iterator>

#pragma comment(linker, "/STACK:26777216")
// #include "bits/stdc++.h

using namespace std;




int main(int argn, char** argv)
{
#ifdef TEST
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	list <int> l; // insert объект создан
	 // emplace объект отсутствует
	l.push_front(-1);
	l.push_front(0);
	l.push_front(1);




	l.push_front(2);
	l.push_front(3);
	//cout << "43434:";

	for (auto it : l) cout << it <<" ";
	cout << "\n";

	for (int i = 0; i < l.size(); ++i)
	{
		cout << *next(l.begin(), i) <<" , ";

		//l[i]; // итератор последовательного доступа
	}
	cout << "\n";
	//for (auto it = l.begin(); )
	for (list<int>::iterator it = l.begin(); it != l.end(); )
	{
		
		if (*it == 1)
		{
			list<int>::iterator to_swap;
			to_swap = next(it, 1);
			l.erase(it);
			it = to_swap;

		}
		++it;
	}

	for (auto it : l) cout << it << " ";
	cout << "\n";


	l.erase(l.begin());

	for (auto it : l) cout << it << " ";
	cout << "\n";







}



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



const int amount_rect = 10;


int v[amount_rect];

void my_func(int step)
{
	cout << "*  Мы зашли в функцию на шаге = " << step << "\n";

	if (step >= amount_rect)
	{
		cout << char(14)<<" Мы закончили рекурсию на шаге = " << step << "\n";
		return;
	}

	v[step] = 0;
	my_func(step + 1);


	cout << "#  Мы продолжили выполнение функции на шаге = " << step << "\n";
	v[step] = 1;
	my_func(step + 1);



	cout << char(20) <<" Мы вышли из функцию на шаге = " << step << "\n";
}


int main(int argn, char** argv)
{
#ifdef TEST
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	my_func(0);






#ifdef ANOTHER

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

#endif





}



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

#include <set>

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


struct my_vect
{

};


template <typename T>
T my_less(T l, T r)
{
	return l < r;
}

int main(int argn, char** argv)
{
#ifdef TEST
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//my_func(0);


	list<int> l = {9, 1, 2, 3, 4, 5};

	list<int>::iterator it = l.begin();

	l.insert(it, 100);

	//for (auto it : l) cout << it << " ";
	//cout << "\n";

	//Красно-черное дерево 
	set<int, std::greater<int> > s;
	
	
	//

	s.insert(5);

	for (auto it : s) cout << it << " ";
	cout << "\n";

	s.insert(1);

	for (auto it : s) cout << it << " ";
	cout << "\n";

	s.insert(3);

	for (auto it : s) cout << it << " ";
	cout << "\n";

	s.insert(2);
	s.insert(2);
	s.insert(2);
	s.insert(2);
	for (auto it : s) cout << it << " ";
	cout << "\n";

	s.insert(4);

	for (auto it : s) cout << it << " ";
	cout << "\n";

	if (s.count(1))
	{
		cout << "doing\n";
	}
	cout<< s.count(2) <<"\n";


	set<int>::iterator et = s.find(2);
	s.erase(et, next(et,2));
	s.insert(s.begin(), 10);

	cout << s.count(2) << "\n";


	

	for (auto it : s) cout << it << " ";
	cout << "\n";






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



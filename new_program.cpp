#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <deque>
#include <cstdio>
#include <functional>
#include <list>
#include <stack>

#pragma comment(linker, "/STACK:26777216")
// #include "bits/stdc++.h

using namespace std;




int main(int argn, char** argv)
{

#ifdef TEST
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	std::stack<int> st;

	for (int i = 0; i < 100; i++)
	{
		st.push(i);

		if (i % 3 == 0)
		{
			st.pop();
		}
	}


	while (st.size())
	{
		cout << st.top()<<" ";
		st.pop();
	}



	


	
}



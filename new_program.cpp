#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <deque>
#include <cstdio>
#include <functional>

#pragma comment(linker, "/STACK:26777216")
// #include "bits/stdc++.h

using namespace std;



class Point
{
public:

	int x;

	int y;

};


bool cmp(Point l, Point r, function<bool(int, int)> less)
{
	if (l.x != r.x) return less(l.x,r.x);
	return less(l.y, r.y);
}

bool operator<(Point l, Point r)
{
	if (l.x != r.x) return (l.x > r.x);
	return (l.y > r.y);
}



class All_Point
{
private:

	ifstream cin;
	ofstream cout;

public:

	All_Point();

	vector<Point> vp;

	void input_point();

	void sorting();

};



void q_sort(int start, int finish, vector<int>& v)
{

	if (start >= finish) return;

	int key = v[(finish - start)/2 + start];


	int iterator_left = start;
	int iterator_right = finish;
	while (iterator_left < iterator_right)
	{
		while (v[iterator_left] < key) 
			++iterator_left;

		while (v[iterator_right] > key) 
			--iterator_right;


		if (iterator_left <= iterator_right)
		{
			swap(v[iterator_left], v[iterator_right]);
			++iterator_left; --iterator_right;
		}
	}


	q_sort(start, iterator_right , v);
	q_sort(iterator_left, finish, v);

}




int main(int argn, char** argv)
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ifstream cin("input.txt");
	ofstream cout("output.txt");


	//All_Point ap;

	//ap.input_point();

	//ap.sorting();
	

	char ch;
	if (ch == ';')
	{
		
	}

}

All_Point::All_Point()
{
	cin.open("input.txt");
	cout.open("output.txt");
}

 std::ifstream& operator>>(std::ifstream& in, Point& p)
{
	char ch;
	in >> p.x >> ch >> p.y;
	return in;
}

void All_Point::input_point()
{
	int n;

	cin >> n;
	//scanf("%d", &n);

	char ch;

	(*this).vp.resize(n);

	//for (auto it : vp)
	for (int i = 0; i < vp.size(); ++i)
	{
		cin >> vp[i];
		//scanf("%d,%d", &vp[i].x, &vp[i].y);

		//cin >> vp[i].x >> ch >> vp[i].y;
	}


	//this->vp.resize(n);




}

void All_Point::sorting()
{

	//sort(vp.begin(), vp.end(), cmp);

	//sort(vp.begin(), vp.end());

	//sort(vp.begin(), vp.end(), cmp);


}

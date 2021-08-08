#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <deque>
#include <cstdio>
#include <functional>

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






int main(int argn, char** argv)
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);


	All_Point ap;

	ap.input_point();

	ap.sorting();

}

All_Point::All_Point()
{
	cin.open("input.txt");
	cout.open("output.txt");
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
		//cin >> vp[i];
		//scanf("%d,%d", &vp[i].x, &vp[i].y);

		cin >> vp[i].x >> ch >> vp[i].y;
	}


	//this->vp.resize(n);




}

void All_Point::sorting()
{

	//sort(vp.begin(), vp.end(), cmp);

	//sort(vp.begin(), vp.end());

	//sort(vp.begin(), vp.end(), cmp);

}
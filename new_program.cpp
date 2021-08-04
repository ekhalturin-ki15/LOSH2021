#include <iostream> // cin cout
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <memory> 

//#include <functional>

#include <list>

using namespace std;


bool is_min(int a, int b)
{
    return (a > b);
}

vector<int> my_sort(vector<int> v)
{
    int i, j;
    for (i = 0; i < v.size(); ++i)
    {
        for (j = i + 1; j < v.size(); ++j)
        {
            if (is_min(v[i], v[j])) swap(v[i], v[j]);
        }
    }
    return v;
}

int my_min(vector<int> v)
{
    v = my_sort(v);

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }


    return v[v.size() / 2];
}



void sum_vector(vector<int>& v, vector<int> b)
{

    int n = v.size();
    v.resize(v.size() + b.size());

    for (int i = n; i < v.size(); ++i)
    {
        v[i] = b[i - n];
    }

}




void di(vector< vector <int>> vv, int step, int shift)
{

    if (step < vv.size())
        if (step + shift < vv[step].size())
            cout << vv[step][step + shift] << " ";
}



int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> q{ 1, 4, 5 };

    vector< vector <int>> vv;

    int a;
    while (true)
    {
        vector <int> v;

        while (true)
        {
            cin >> a;

            if (a <= -10) break;

            v.push_back(a);

        }

        vv.push_back(v);

        if (a <= -20) break;
    }



    for (int j = 0; j < vv[0].size(); ++j)
    {
        for (int i = 0; i < min(vv.size(), vv[0].size()); ++i)
        {

            di(vv, i, j); // cout<<vv[i][i];

        }


        cout << "\n";
    }





}

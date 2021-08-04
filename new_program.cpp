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

    // -----------------
    // 9 1 2 8 3 7 8 4 5
    // |
    //   - - 

    int i, j;
    for (i = 0; i < v.size(); ++i)
    {
        for (j = i + 1; j < v.size(); ++j)
        {
            if (is_min(v[i] , v[j])) swap(v[i], v[j]);
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


    return v[v.size()/2];
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


int main( )
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    //bin(15);


    int a;

    vector< vector <int>> vv;


    while (true)
    {

        vector<int> v;

        while (true)
        {
            cin >> a;
            if (a < 0) break;
                
             v.push_back(a);

        }

        vv.push_back(v);

        if (a == -2) break;


    }

    vector<int> sum_v;


    for (int i = 0; i < vv.size(); ++i)
    {

        sum_vector(sum_v, vv[i]);
    }


    for (int i = 0; i < sum_v.size(); ++i)
    {
        int& it = sum_v[i];

        cout << it << " ";
    }


    // for (auto it : sum_v) cout << it << " ";



}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// <
bool cmp(int l, int r)
{
    return l > r;
}

int sum_dig(int a)
{
    int ret = 0;

    while (a)
    {
        ret += a % 10;
        a /= 10;
    }

    return ret;
}



int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    int n, m, a;

    cin >> n;

    cin >> a;

    //vector<int> v;
    //      ---------->
    //v = (1, 2, 3, 4, 2);



    vector< vector<char> > vv(n , vector<char>(n) );


    for (int y = 0; y < n; ++y)
    {
        cin >> a;
        for (int x = 0; x < n; ++x)
        {
            cin >> vv[y][x];

        }
    }

    int h = n, w = n;

    for (int y = 0; y < h; ++y)
    {
        for (int x = y + 1; x < w; ++x)
        {
            if (vv[y][x] == '1')
                cout << y+1 << " " << x+1 << "\n";

        }
    }










    return 0;
}
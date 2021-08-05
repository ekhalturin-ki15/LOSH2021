#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// <
bool cmp(int l, int r)
{
    return l > r;
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // O( n^2 )
    
    // / *
    // + -
    // ++ -- << >>

    int n;

    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    std::sort( v.begin(), v.end() ); 
    
    for (int i = 0; i < n; ++i)
    {
        cout << v[i] << " ";
    }



    









    return 0;
}
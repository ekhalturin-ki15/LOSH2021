#include <iostream> // cin cout
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <memory> 

#include <list>

using namespace std;

int main( )
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    vector<char> v(10);

    v[0] = 1;
    v[1] = 1;
    v[2] = 2;
    v[3] = 3;
    v[4] = 5;
    v[5] = 8;

    vector<int> fib{ 1, 1 , 2, 3, 5, 8, 13, 21 };

    cout << fib.back();

    vector<int> fib2{ 1, 1 , 2, 3, 5, 8, 13, 21 };

    //fib.insert(fib.end(), fib2.begin(), fib2.end());

    string s = "Hello";
    string ss{ ' ', 'W', 'o', 'r', 'l', '8', '1', '2' };

    ss.resize(100);


    //--------------->
    //0123232390279845

    return 0;
}
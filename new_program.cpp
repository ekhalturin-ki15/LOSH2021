#include <iostream> // cin cout
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <memory> 

using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    //

    int n;

    cin >> n; // 39

    vector< double > dd(n + n);

    for (int i = 0; i < dd.size()   ; ++i)
    {
        dd[i] = log(i); // log2

        //2^10101  log3(3^10101) = 10101

    }


    dd.push_back(3289547);

    dd.pop_back();

    int back1 = dd[ dd.size() - 1 ];


    int back2 = dd.back();

   

    cout << back1 << " " << back2;


    int i = 0;



    //vector<int> v;

    //while (i < )




}
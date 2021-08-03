#include <iostream> // cin cout
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int w, h;

    cin >> w >> h;

    char ch;

    //Считываем лабиринт
    for (int y = 0; y < h; ++y)
    {
        for (int x = 0; x < w; ++x)
        {
            cin >> ch;

            if (ch == '0') cout << '.';
            else cout << '#';
        }

        cout << "\n";
    }

    int n;

    cin >> n;


    int a[14];// a[0] a[1] ... a[13]


    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    //[0 13]
    int rand;

    std::srand(std::time(0) );
    rand = std::rand();

    // 0 2^32
    //[0 13] n

    rand %= n;

    cout << a[rand];


    int step = 0;
    while (step < n)
    {
        //...//
    }


    step = 0;
    do
    {
        //...//
    } while (step < n);

}
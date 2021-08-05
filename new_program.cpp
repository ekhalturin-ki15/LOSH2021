#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef std::vector<int> VI;
typedef std::vector<vector<int>> VVI;


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



bool rect(int step, int step_finish, vector<int>& v, int& all_row)
{



    if (step == step_finish)
    {
        if (all_row <= 0)  return false;
        --all_row;


        for (int i = 0; i < v.size(); ++i)
        {
            cout << v[i];
        }

        if (all_row <= 0)  return false;

        cout << "\n";
        
        
        return true;
    }


    v[step] = 0;
    if (!rect(step + 1, step_finish, v, all_row)) return false;


    v[step] = 1;
    if (!rect(step + 1, step_finish, v, all_row)) return false;

    return true;
}


void inline cin_vector(vector<int>& v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        //cin >> v[i];
        scanf("%d", &(v[i]));
    }
}

void inline out_vector(const vector<int>& v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        //cout << v[i];

        printf("%d ", v[i]);
    }

    printf("\n");
}



int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    // O(!n)

    // O(3^n)


    int n, m, a, all_row;

    cin >> n >> all_row;

    vector<int> v(n);
    //rect(0, n , v, all_row);


    for (int i = 0; i < all_row; ++i)
    {
        int j = i;

        vector<int> out;


        while (j)
        {
            out.push_back( j % 2);
            j /= 2;
        }

        for (j = 0; j < n - out.size() - 1; ++j) cout << "0";

        out_vector(out);

        cout << "\n";

    }

    //vector<int> v(n);

    //v.resize(n);

    //cin_vector(v);

    //sort( v.begin(), v.end() );
    //
    //while (next_permutation(v.begin(), v.end()))
    //{

    //    out_vector(v);
    //}


    return 0;
}
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


VI v;

void rect(int step, int step_finish)
{
    if (step == step_finish)
    {
        for (int i = 0; i < v.size(); ++i)
        {
            cout << v[i];
        }

        cout << "\n";
        return;
    }


    v[step] = 0;
    rect(step + 1, step_finish);

    v[step] = 1;
    rect(step + 1, step_finish);

    v[step] = 2;
    rect(step + 1, step_finish);


    return;
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


    int n, m, a;

    cin >> n;

    vector<int> v(n);

    v.resize(n);

    cin_vector(v);

    sort( v.begin(), v.end() );
    
    while (next_permutation(v.begin(), v.end()))
    {

        out_vector(v);
    }





   










    return 0;
}
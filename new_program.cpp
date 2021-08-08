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

typedef vector <vector<char>> VVC;
typedef vector< pair<int, int > > VPI;


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


#define FOR(i,n) for (i = 0; i < n; ++i)



bool is_ok(int x, int y, int old_x, int old_y, int w, int h, const VVC& vv)
{
    if (vv[old_y][old_x] == '#') return false;

    if (x < 0) return false;

    if (x >= w) return false;

    if (y < 0) return false;

    if (y >= h) return false;

    if (vv[y][x] == '#') return false;


    return true;


}



typedef vector <vector<char>> VVB;


const int FILL = 1;

VPI out_list;

void out_coord(int x, int y)
{
    out_list.push_back({x,y});
}

bool DFS(int x_now, int y_now, int fx, int fy, const vector< vector< VPI  > >& adjacent, VVB& vv)
{
    vv[y_now][x_now] = FILL;

    if (x_now == fx)
        if (y_now == fy)
        {
            out_coord(x_now, y_now);
            return true;
        }

    const VPI& adjacent_now = adjacent[y_now][x_now];

    for (int i = 0; i < adjacent_now.size(); ++i)
    {
        //auto [x, y] = adjacent_now[i];

        int x = adjacent_now[i].first;
        int y = adjacent_now[i].second;

        //if (vv[y][x]) continue;

        if (vv[y][x] == 0)
        {
            if (DFS(x, y, fx, fy, adjacent, vv))
            {
                out_coord(x_now, y_now);
                return true;
            }
        }   
    }


    return false;
}



int fib(int k)
{
    if (k <= 1) return 1;

    return fib(k - 1) + fib(k - 2);

}



int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);


    // 
    int n;
    cin >> n;

    cout<<fib(n);





    return 0;
}
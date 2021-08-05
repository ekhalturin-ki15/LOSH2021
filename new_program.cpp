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



int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int w, h, x, y;
    cin >> w >> h;

    vector <vector<char>> vv(h);
    vector< vector< VPI  > >  adjacent(h);


    //pair <int, int> start_ceil;
    int start_ceil_x;
    int start_ceil_y;

    int finish_ceil_x;
    int finish_ceil_y;

    for (y = 0; y < h; ++y)
    {
        vv[y].resize(w);

        adjacent[y].resize(w);

        FOR(x, w)
        {
            cin >> vv[y][x];

            if (vv[y][x] == 'F')
            {
                start_ceil_x = x;
                start_ceil_y = y;
            }


            if (vv[y][x] == 'S')
            {
                finish_ceil_x = x;
                finish_ceil_y = y;
            }



        }
    }

    const int amount_dir = 4;
    vector<int> dir_x = { 0,1,0,-1 };
    vector<int> dir_y = { 1,0,-1, 0 };




    //tuple <int ,int ,int>


    int x_new, y_new;




    FOR(y, h)
    {
        FOR(x, w)
        {
            for (int i = 0; i < amount_dir; ++i)
            {
                x_new = x + dir_x[i];
                y_new = y + dir_y[i];


                if (is_ok(x_new, y_new, x, y, w, h, vv))
                {

                    //pair<int, int> pr(x_new, y_new);
                    adjacent[y][x].push_back({ x_new, y_new });

                }


            }



        }
    }


    VVB ceils(h, vector<char>(w));


    DFS(start_ceil_x, start_ceil_y, finish_ceil_x, finish_ceil_y, adjacent, ceils);


    for (int i = 0; i < out_list.size(); ++i)
    {
        //auto [x, y] = out_list[i];
        int x = out_list[i].first;
        int y = out_list[i].second;

        ceils[y][x] = 2;

        //cout << out_list[i].first << " " << out_list[i].second << endl;
    }


    for (y = 0; y < h; ++y)
    {
        FOR(x, w)
        {
            if (ceils[y][x] == 2)
            {
                cout << '*';
            }
            else
                cout << vv[y][x];


        }

        cout << "\n";
    }




    return 0;
}
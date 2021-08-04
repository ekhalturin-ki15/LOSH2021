#include <iostream> // cin cout
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <memory> 

#include <list>

using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    const int N = 10, M = 20, D =20;


    char v_old[N]; // N
    vector< char > vvv_new(N);



    
    char vv_old[N][M]; // N*M
    vector< vector< char> > v_new(N, vector< char>(M));

    vector< vector< char>  > vv_new(N);




    for (int i = 0; i < N; ++i)
    {
        vv_new[i].resize( i + 1 );
        
    }

    vector <vector < vector< char > >  > vvv(N, vector < vector< char >>(M, vector< char > (D)));


    //char v_old[N][M][D][N][M]; N*M..





    v_new.resize(N);








}
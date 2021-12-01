
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#include <random>
constexpr int FLOAT_MIN = 0;
constexpr int FLOAT_MAX = 1;

int main()
{
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_real_distribution<float> distr(FLOAT_MIN, FLOAT_MAX);
    /*
    for (int n = 0; n < 5; ++n)
    {
        cout << setprecision(6)
             << distr(eng) << "\n";
    }*/

    int N;
    N = 100;
    double a[N + 10][N + 10];
    rep(i,100){
        rep(j,100){
            a[i][j]=distr(eng);
            cout<<i<<" "<<j<<" "<<a[i][j]<<endl;
        }
        cout<<endl;
    }
}

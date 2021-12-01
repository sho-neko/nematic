
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <fstream>
#include <random>
constexpr int FLOAT_MIN = 0;
constexpr int FLOAT_MAX = 1;

const double pi=3.14159265359;
int main()
{
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_real_distribution<float> distr(FLOAT_MIN, FLOAT_MAX);
    ofstream c;
    c.open("c");
    int N;
    N = 100;
    double a[N + 10][N + 10];
    rep(i,100){
        rep(j,100){
            a[i][j]=distr(eng);
            c<<i<<" "<<j<<" "<<cos(a[i][j]*pi)<<endl;
        }
        c<<endl;
    }
}

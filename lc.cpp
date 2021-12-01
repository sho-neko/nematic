
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
    ofstream c,after;
    c.open("c");
    int N;
    N = 300;
    double a[N + 10][N + 10];
    rep(i,N){
        rep(j,N){
            a[i][j]=distr(eng)*2*pi;
            if(j==0||j==N-1)a[i][j]=0;
            if(i==0||i==N-1)a[i][j]=0;
            c<<i<<" "<<j<<" "<<pow(cos(a[i][j]),2)<<endl;
        }
        c<<endl;
    }
    rep(num,100000000){
        int i=rand() % (N-2) +1;
        int j=rand() % (N-2) +1;
        double energy=0;
        energy+=-2.0/3.0*(pow(cos(a[i][j]-a[i+1][j]),2)+pow(cos(a[i][j]-a[i-1][j]),2)+pow(cos(a[i][j]-a[i][j+1]),2)+pow(cos(a[i][j]-a[i][j-1]),2));
        double newa=distr(eng)*2*pi;
        double newenergy=-2.0/3.0*(pow(cos(newa-a[i+1][j]),2)+pow(cos(newa-a[i-1][j]),2)+pow(cos(newa-a[i][j+1]),2)+pow(cos(newa-a[i][j-1]),2));
        //cout<<newenergy<<" "<<energy<<endl;
        if(newenergy<energy){
            a[i][j]=newa;
        }
    }
    after.open("after");
    rep(i,N){
        rep(j,N){
            after<<i<<" "<<j<<" "<<pow(cos(a[i][j]),2)<<endl;
        }
        after<<endl;
    }
}

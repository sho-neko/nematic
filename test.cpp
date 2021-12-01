// ofstream sample


#include <fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main()
{   
    ofstream a;
    a.open("c");
    rep(i,5){
        a<<1<<i<<" "<<endl;;
    }
    /*
    std::ofstream writing_file;
    std::string filename = "sample.txt";
    writing_file.open(filename, std::ios::out);
    std::string writing_text = "hello";
    writing_file << writing_text << std::endl;
    writing_file.close();
    return 0;
    */
}
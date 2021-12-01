
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#include <random>

int main()
{
  // メルセンヌ・ツイスター法による擬似乱数生成器を、
  // ハードウェア乱数をシードにして初期化
  std::random_device seed_gen;
  std::mt19937 engine(seed_gen());

  // 一様実数分布
  // [-1.0, 1.0)の値の範囲で、等確率に実数を生成する
  std::uniform_real_distribution<> dist1(-1.0, 1.0);

  std::ofstream file("random.tsv");
  for (size_t i = 0; i < 1000 * 1000; ++i)
  {
    // 各分布法に基いて乱数を生成
    double r1 = dist1(engine);

    file << r1 << "\n";
  }
  std::uniform_real_distribution<double> get_rand_uni_real(0.0, 1.0);
  int N;
  N = 100;
  double a[N + 10][N + 10];
  rep(i, 100)
  {
    // cout<<get_rand()<<endl;
  }
}

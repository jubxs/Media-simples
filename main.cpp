#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;int soma = 0;
  cin >> N;
  int n[N];
  for(int i = 0; i < N; i++){
    cin >> n[i];
    soma += n[i];
  }
  cout << fixed << setprecision(2) << (float)soma/N << endl;
  return 0;
}
  
#include <bits/stdc++.h>
using namespace std;
long long fact(long long n) {
  long long ret = 1;
  for (int i = 1; i <= n; i++) {
    ret *= i;
  }
  return ret % 10;
}
long long pw(long long a, long long b) {
  long long ret = 1;
  for (int i = 0; i < b; i++) {
    ret *= a;
    ret %= 10;
  }
  return ret;
}
int main() {
  long long x, n;
  cin >> x >> n;
  if (n > 4) {
    cout << 1 << '\n';
  } else {
    cout << pw(x, fact(n)) << '\n';
  }
  return 0;
}
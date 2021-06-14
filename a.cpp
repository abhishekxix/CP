#include <bits/stdc++.h>

using namespace std;

template <class T>
T minimum_value(T x, T y) {
  return (x < y ? x : y);
}

int main() {
  string a = "abc";
  string b = "def";
  cout << minimum_value<string>(a, b);

  return 0;
}
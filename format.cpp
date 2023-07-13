#include <bits/stdc++.h>

#include <format>
using namespace std;

int main() {
  int a;
  int b;
  cout << "a : ";
  cin >> a;
  cout << "b : ";
  cin >> b;
  int c = a + b;
  string str =
      std::format("{} + {} = {}", a, b, c);  // 오류라고 나오지만 실행됨
  cout << str << endl;
  return 0;
}
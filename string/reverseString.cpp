#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "Rupesh";

  int amount = s.size();
  int j = amount - 1;

  for (int i = 0; i < amount / 2; i++)
  {
    swap(s[i], s[j]);
    j--;
  }
  cout << s;
  return 0;
}
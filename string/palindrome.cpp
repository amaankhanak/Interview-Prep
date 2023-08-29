#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  s = "bababab";

  int j = s.size() - 1;
  int mid = s.size() / 2;
  bool flag = true;

  for (int i = 0; i < mid; i++)
  {
    if (s[i] != s[j])
    {
      flag = false;
    }
    j--;
  }

  if (flag)
  {
    cout << "Palindrome" << endl;
  }
  else
  {
    cout << "Not";
  }

  return 0;
}
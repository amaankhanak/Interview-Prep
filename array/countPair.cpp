#include <bits/stdc++.h>
using namespace std;

int main()
{
  int sum = 6;
  int arr[4] = {1, 5, 7, 1};
  unordered_map<int, int> m;
  int ans = 0;
  for (int i = 0; i < 4; i++)
  {
    int val = 6 - arr[i];
    if (m[val])
    {
      ans += m[val];
    }
    m[arr[i]]++;
  }
  cout << ans;

  return 0;
}
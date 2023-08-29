#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[6] = {0, 1, 2, 0, 1, 2};
  int l = 0;
  int m = 0;
  int h = 5;
  while (m <= h)
  {
    if (a[m] == 0)
    {
      swap(a[l], a[m]);
      l++;
      m++;
    }
    else if (a[m] == 1)
    {
      m++;
    }
    else if (a[m] == 2)
    {
      swap(a[m], a[h]);
      h--;
    }
  }

  for (int i = 0; i < 6; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}
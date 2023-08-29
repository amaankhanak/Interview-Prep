#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int size = n - 1;

  int arr[size];

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  int sum = n * (n + 1) / 2;
  int arrSum = 0;
  for (int i = 0; i < size; i++)
  {
    arrSum = arrSum + arr[i];
  }
  cout << sum - arrSum;
  return 0;
}